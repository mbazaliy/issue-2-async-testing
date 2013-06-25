//
//  OHHTTPStubsResponse+BundleResponse.h
//  PinacotecaCore
//
//  Created by Tobias Kräntzer on 23.06.13.
//  Copyright (c) 2013 Tobias Kräntzer. All rights reserved.
//

#import <OHHTTPStubs/OHHTTPStubs.h>

@interface OHHTTPStubsResponse (BundleResponse)

// generated by using `curl -is URL`

+ (OHHTTPStubsResponse*)responseNamed:(NSString *)responseName
                           fromBundle:(NSBundle *)bundle
                         responseTime:(NSTimeInterval)responseTime;

+ (OHHTTPStubsResponse*)responseWithRawResponse:(NSData *)responseData
                                   responseTime:(NSTimeInterval)responseTime;

@end

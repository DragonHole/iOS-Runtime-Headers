/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString * accessToken; 
@property (assign) int responseDataFormat; 
-(id)preparedURLRequest;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(void)setResponseDataFormat:(int)arg1 ;
-(void)preflightRequest;
-(int)responseDataFormat;
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
@end


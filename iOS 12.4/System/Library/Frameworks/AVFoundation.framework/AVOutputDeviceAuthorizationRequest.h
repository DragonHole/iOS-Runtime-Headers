/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceAuthorizationRequestInternal, NSError, NSString, AVOutputDevice;

@interface AVOutputDeviceAuthorizationRequest : NSObject {

	AVOutputDeviceAuthorizationRequestInternal* _ivars;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,readonly) NSString * authorizationTokenType; 
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1 ;
-(id)impl;
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(long long)status;
-(NSError *)error;
@end

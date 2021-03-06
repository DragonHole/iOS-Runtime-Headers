/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, AVOutputDevice;


@protocol AVOutputDeviceAuthorizationRequestImpl <NSObject>
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,readonly) NSString * authorizationTokenType; 
@required
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(void)cancel;

@end


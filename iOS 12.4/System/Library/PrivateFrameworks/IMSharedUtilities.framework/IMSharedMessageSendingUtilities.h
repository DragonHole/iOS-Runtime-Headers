/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMSharedMessageSendingUtilities : NSObject {

	long long _serviceAvailability;

}

@property (assign) long long serviceAvailability;              //@synthesize serviceAvailability=_serviceAvailability - In the implementation block
+(void)_setupAccountMonitor;
+(void)initialize;
+(id)sharedInstance;
-(long long)serviceAvailability;
-(BOOL)_hasSMSCapability;
-(void)setServiceAvailability:(long long)arg1 ;
-(id)_managedConfigAppWhitelist;
-(BOOL)_isiMessageSupported;
-(long long)_maxMMSAttachmentCount;
-(long long)_maxMMSMessageByteCount;
-(BOOL)_canSendText;
-(void)_updateServiceAvailability;
-(BOOL)canSendText;
-(BOOL)isMMSEnabled;
-(BOOL)isiMessageEnabled;
-(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
-(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
@end


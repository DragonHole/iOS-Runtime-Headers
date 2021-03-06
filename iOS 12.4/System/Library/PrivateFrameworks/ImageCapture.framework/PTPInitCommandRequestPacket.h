/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {

	unsigned char _initiatorGUID[16];
	NSString* _initiatorFriendlyName;

}
-(id)initWithInitiatorGUID:(char*)arg1 initiatorFriendlyName:(id)arg2 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(const char*)initiatorGUID;
-(void)setInitiatorGUID:(char*)arg1 ;
-(id)initiatorFriendlyName;
-(void)setInitiatorFriendlyName:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end


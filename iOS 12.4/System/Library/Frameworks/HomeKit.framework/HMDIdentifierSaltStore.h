/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject {

	HMFUnfairLock* _lock;
	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;

}

@property (nonatomic,retain) NSData * identifierSalt;                       //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;              //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
-(id)init;
@end


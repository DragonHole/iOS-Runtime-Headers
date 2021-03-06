/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject {

	AAStorableLoginContext* _stashedContext;
	os_unfair_lock_s _stashedContextLock;

}

@property (nonatomic,retain) AAStorableLoginContext * stashedContext; 
+(id)sharedManager;
-(id)init;
-(void)setStashedContext:(AAStorableLoginContext *)arg1 ;
-(void)persistStashedContext;
-(AAStorableLoginContext *)stashedContext;
@end


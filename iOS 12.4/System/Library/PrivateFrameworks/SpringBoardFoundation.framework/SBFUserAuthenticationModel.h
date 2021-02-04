/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFUserAuthenticationModel <NSObject>
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)noteNewMkbDeviceLockState:(id)arg1;
-(void)refreshBlockedState;
-(void)clearBlockedState;

@required
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(BOOL)isTemporarilyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isPermanentlyBlocked;
-(void)setDelegate:(id)arg1;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)synchronize;

@end

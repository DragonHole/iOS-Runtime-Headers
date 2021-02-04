/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FAFamilyDetailsCache : NSObject {

	unsigned long long _pendingInviteCount;
	BOOL _isValid;
	BOOL _isValidating;

}

@property (nonatomic,readonly) unsigned long long pendingInviteCount; 
+(id)sharedCache;
-(unsigned long long)pendingInviteCount;
-(void)_fetchPendingInviteCount;
-(void)_setPendingInviteCount:(unsigned long long)arg1 ;
-(void)invalidate;
@end

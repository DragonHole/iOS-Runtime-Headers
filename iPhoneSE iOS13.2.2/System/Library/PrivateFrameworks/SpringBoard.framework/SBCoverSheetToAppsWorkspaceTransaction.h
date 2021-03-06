/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDismissOverlaysAnimationController, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	SBDismissOverlaysAnimationController* _dismissOverlaysAnimationController;
	SBTransientOverlayDismissAllWorkspaceTransaction* _transientOverlayTransaction;
	BOOL _preservesBanners;

}

@property (assign,nonatomic) BOOL preservesBanners;              //@synthesize preservesBanners=_preservesBanners - In the implementation block
-(void)_begin;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)setPreservesBanners:(BOOL)arg1 ;
-(void)_dismissOverlaysIfNeeded;
-(unsigned long long)_dismissOverlaysOptions;
-(BOOL)preservesBanners;
@end


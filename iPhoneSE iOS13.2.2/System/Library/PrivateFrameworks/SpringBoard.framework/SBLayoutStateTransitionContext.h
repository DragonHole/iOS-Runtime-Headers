/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLayoutState, NSError, SBWorkspaceTransaction, SBWorkspaceApplicationSceneTransitionContext;

@interface SBLayoutStateTransitionContext : NSObject {

	BOOL _complete;
	BOOL _animationsDisabled;
	SBLayoutState* _fromLayoutState;
	SBLayoutState* _toLayoutState;
	NSError* _error;
	SBWorkspaceTransaction* _workspaceTransaction;
	SBWorkspaceApplicationSceneTransitionContext* _applicationTransitionContext;

}

@property (nonatomic,__weak,readonly) SBWorkspaceTransaction * workspaceTransaction;                                            //@synthesize workspaceTransaction=_workspaceTransaction - In the implementation block
@property (nonatomic,__weak,readonly) SBWorkspaceApplicationSceneTransitionContext * applicationTransitionContext;              //@synthesize applicationTransitionContext=_applicationTransitionContext - In the implementation block
@property (nonatomic,readonly) SBLayoutState * fromLayoutState;                                                                 //@synthesize fromLayoutState=_fromLayoutState - In the implementation block
@property (nonatomic,readonly) SBLayoutState * toLayoutState;                                                                   //@synthesize toLayoutState=_toLayoutState - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                                                                 //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                                                 //@synthesize error=_error - In the implementation block
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (nonatomic,readonly) BOOL animationsDisabled;                                                                         //@synthesize animationsDisabled=_animationsDisabled - In the implementation block
-(id)init;
-(NSError *)error;
-(BOOL)isComplete;
-(BOOL)isInterrupted;
-(SBLayoutState *)toLayoutState;
-(SBWorkspaceApplicationSceneTransitionContext *)applicationTransitionContext;
-(SBLayoutState *)fromLayoutState;
-(id)initWithWorkspaceTransaction:(id)arg1 ;
-(void)transitionCompletedWithError:(id)arg1 ;
-(SBWorkspaceTransaction *)workspaceTransaction;
-(BOOL)animationsDisabled;
@end


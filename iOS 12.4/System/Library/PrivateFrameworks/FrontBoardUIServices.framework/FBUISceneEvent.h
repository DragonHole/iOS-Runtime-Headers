/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject {

	FBSSceneTransitionContext* _transitionContext;
	/*^block*/id _sender;
	BOOL _sent;

}

@property (nonatomic,readonly) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(void)sendWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithTransitionContext:(id)arg1 sender:(/*^block*/id)arg2 ;
-(void)dealloc;
-(FBSSceneTransitionContext *)transitionContext;
-(void)send;
@end


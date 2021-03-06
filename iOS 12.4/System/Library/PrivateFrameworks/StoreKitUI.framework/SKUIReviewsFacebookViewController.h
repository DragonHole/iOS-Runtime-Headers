/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIReviewsFacebookViewControllerDelegate;
@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@interface SKUIReviewsFacebookViewController : UIViewController {

	SKUIClientContext* _clientContext;
	id<SKUIReviewsFacebookViewControllerDelegate> _delegate;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIReviewsFacebookView* _facebookView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIFacebookLikeStatus * facebookLikeStatus;                                  //@synthesize facebookLikeStatus=_facebookLikeStatus - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIReviewsFacebookViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIFacebookLikeStatus *)facebookLikeStatus;
-(void)setFacebookLikeStatus:(SKUIFacebookLikeStatus *)arg1 ;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUIReviewsFacebookViewControllerDelegate>)arg1 ;
-(id<SKUIReviewsFacebookViewControllerDelegate>)delegate;
-(void)loadView;
@end


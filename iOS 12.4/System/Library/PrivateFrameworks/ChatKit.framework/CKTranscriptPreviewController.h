/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewControllerDelegate.h>

@protocol CKTranscriptPreviewControllerDelegate;
@class CKConversation, NSObject, CKTranscriptCollectionView, NSString;

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {

	CKConversation* _conversation;
	NSObject*<CKTranscriptPreviewControllerDelegate> _delegate;
	CKTranscriptCollectionView* _collectionView;
	double _transcriptWidth;
	UIEdgeInsets _layoutMargins;

}

@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                 //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) double transcriptWidth;                                                        //@synthesize transcriptWidth=_transcriptWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                    //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKTranscriptPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setTranscriptWidth:(double)arg1 ;
-(double)transcriptWidth;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(void)setDelegate:(NSObject*<CKTranscriptPreviewControllerDelegate>)arg1 ;
-(NSObject*<CKTranscriptPreviewControllerDelegate>)delegate;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)loadView;
-(CKTranscriptCollectionView *)collectionView;
-(void)viewDidLayoutSubviews;
-(void)setCollectionView:(CKTranscriptCollectionView *)arg1 ;
-(id)previewActions;
-(id)textInputContextIdentifier;
@end


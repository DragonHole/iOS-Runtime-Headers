/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPUTextDrawingCacheInvalidationObserver.h>
#import <libobjc.A.dylib/MusicArtworkViewDelegate.h>

@protocol MusicEntityValueProviding;
@class MusicArtworkView, UITraitCollection, NSMutableArray, NSMapTable, UIImage, MusicEntityViewContentDescriptor, UIImageView, UIControl, NSString;

@interface MusicEntityAbstractLockupView : UIView <MPUTextDrawingCacheInvalidationObserver, MusicArtworkViewDelegate> {

	BOOL _artworkConfigurationBlockEnabled;
	MusicArtworkView* _artworkView;
	UITraitCollection* _cachedTraitCollection;
	BOOL _hasDirtyPlaybackStatusUpdate;
	double _lastUsedArtworkViewAspectRatio;
	double _playbackCurrentTimeOriginatingTime;
	NSMutableArray* _recycledTextButtons;
	NSMutableArray* _recycledTextDrawingViews;
	NSMapTable* _textDescriptorsToRecycledTextButtons;
	NSMapTable* _textDescriptorsToTextDrawingViews;
	BOOL _wasUpdatedForAsynchronousPropertyLoadCompleted;
	BOOL _entityDisabled;
	BOOL _highlighted;
	BOOL _usingPlaceholderArt;
	UIImage* _artworkOverrideImage;
	id<MusicEntityValueProviding> _entityValueProvider;
	MusicEntityViewContentDescriptor* _contentDescriptor;

}

@property (setter=_setContentDescriptor:,getter=_contentDescriptor,nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor;              //@synthesize contentDescriptor=_contentDescriptor - In the implementation block
@property (getter=_currentTextLabelAlpha,nonatomic,readonly) double _currentTextLabelAlpha; 
@property (getter=_artworkView,nonatomic,readonly) UIImageView * artworkView; 
@property (getter=_addButton,nonatomic,readonly) UIControl * addButton; 
@property (nonatomic,retain) UIImage * artworkOverrideImage;                                                                                            //@synthesize artworkOverrideImage=_artworkOverrideImage - In the implementation block
@property (assign,getter=isEntityDisabled,nonatomic) BOOL entityDisabled;                                                                               //@synthesize entityDisabled=_entityDisabled - In the implementation block
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider;                                                                         //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                                                                                   //@synthesize highlighted=_highlighted - In the implementation block
@property (getter=isUsingPlaceholderArt,nonatomic,readonly) BOOL usingPlaceholderArt;                                                                   //@synthesize usingPlaceholderArt=_usingPlaceholderArt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_maximumTextHeightForTextDescriptors:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)_shouldShowPlayButton;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(id)_contentDescriptor;
-(void)_layoutArtworkViewWithAvailableContentBounds:(CGRect)arg1 layoutDirection:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_getViewToProposedFrameMap:(id*)arg1 withTextDescriptors:(id)arg2 availableContentBounds:(CGRect)arg3 exclusionRectangle:(CGRect)arg4 totalTextHeight:(double*)arg5 ;
-(id)_viewForTextDescriptor:(id)arg1 ;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_recycleTextViewsForTextDescriptors:(id)arg1 ;
-(void)_setContentDescriptor:(id)arg1 ;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(void)updateForAsynchronousPropertyLoadCompleted;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(BOOL)_shouldArtworkViewRespectHighlightProperty;
-(void)_handleArtworkViewTapped;
-(void)_entityDisabledDidChange;
-(id)_effectiveArtworkBackgroundColor;
-(void)_handleContentDescriptorDidInvalidate:(id)arg1 ;
-(BOOL)isEntityDisabled;
-(double)_currentTextLabelAlpha;
-(id)_newArtworkView;
-(void)_configureArtworkView:(id)arg1 forContentArtworkDescriptor:(id)arg2 entityValueProvider:(id)arg3 ;
-(void)_handleArtworkImageUpdate:(id)arg1 idealArtworkSize:(CGSize)arg2 ;
-(void)_configureArtworkCatalog:(id)arg1 ;
-(void)_artworkViewImageDidChange;
-(void)textDrawingCacheWasInvalidated:(id)arg1 ;
-(void)musicArtworkViewDidTouchUpInside:(id)arg1 ;
-(id)_artworkView;
-(id)_addButton;
-(void)setArtworkOverrideImage:(UIImage *)arg1 ;
-(UIImage *)artworkOverrideImage;
-(BOOL)isUsingPlaceholderArt;
-(void)dealloc;
-(BOOL)isHighlighted;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end


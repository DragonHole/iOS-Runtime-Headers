/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <NotesUI/NotesTextureScrolling.h>
#import <libobjc.A.dylib/ICAccessibilityChildReparentingTarget.h>

@protocol ICAccessibilityChildReparentingProvider;
@class UIView, NotesTextureBackgroundView, NSLayoutConstraint, NotesTextureView, NSString;

@interface NotesBackgroundView : UIView <NotesTextureScrolling, ICAccessibilityChildReparentingTarget> {

	BOOL _contentViewVisible;
	BOOL _topViewVisible;
	UIView* _contentView;
	NotesTextureBackgroundView* _textureView;
	NotesTextureBackgroundView* _topTextureView;
	NotesTextureBackgroundView* _bottomTextureView;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _bottomBarConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	id<ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;

}

@property (nonatomic,retain) NotesTextureBackgroundView * textureView;                                                           //@synthesize textureView=_textureView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * topTextureView;                                                        //@synthesize topTextureView=_topTextureView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * bottomTextureView;                                                     //@synthesize bottomTextureView=_bottomTextureView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                                              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomBarConstraint;                                                           //@synthesize bottomBarConstraint=_bottomBarConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                                   //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting;              //@synthesize elementForAccessibilityReparenting=_elementForAccessibilityReparenting - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isContentViewVisible,nonatomic) BOOL contentViewVisible;                                                //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (assign,getter=isTopViewVisible,nonatomic) BOOL topViewVisible;                                                        //@synthesize topViewVisible=_topViewVisible - In the implementation block
@property (nonatomic,readonly) NotesTextureView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isContentViewVisible;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)scrollView:(id)arg1 didChangeContentOffset:(CGPoint)arg2 ;
-(NotesTextureBackgroundView *)topTextureView;
-(NotesTextureBackgroundView *)bottomTextureView;
-(void)setBottomBarConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomBarConstraint;
-(NotesTextureBackgroundView *)textureView;
-(id)scrollViewDescendantOfView:(id)arg1 ;
-(void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2 ;
-(void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2 topMargin:(double)arg3 ;
-(id<ICAccessibilityChildReparentingProvider>)elementForAccessibilityReparenting;
-(void)setElementForAccessibilityReparenting:(id<ICAccessibilityChildReparentingProvider>)arg1 ;
-(void)reparentAccessibilityChildrenOfElement:(id)arg1 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3 ;
-(void)updateConstraintsForBottomToolbar:(id)arg1 ;
-(void)fadeOutBottomToolbar:(id)arg1 duration:(double)arg2 ;
-(void)fadeInBottomToolbar:(id)arg1 duration:(double)arg2 ;
-(void)snapshotContentIntoSnapshotView:(id)arg1 ;
-(void)setTopViewVisible:(BOOL)arg1 ;
-(void)setupContentViewHomeIndicatorAvoidanceWithSize:(double)arg1 ;
-(void)addSubviewAboveAllViews:(id)arg1 ;
-(void)setAlphaForTopAndBottomBars:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTopViewVisible;
-(void)setTextureView:(NotesTextureBackgroundView *)arg1 ;
-(void)setTopTextureView:(NotesTextureBackgroundView *)arg1 ;
-(void)setBottomTextureView:(NotesTextureBackgroundView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityElements;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(UIView *)contentView;
-(NotesTextureView *)backgroundView;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)commonInit;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityDelegate.h>

@protocol VUIDownloadEntityTableViewCellDelegate;
@class VUISeparatorView, VUILabel, _TVImageView, VUIImageView, VUIDownloadButton, VUIDownloadEntity, NSString;

@interface VUIDownloadEntityTableViewCell : UITableViewCell <VUIRentalExpirationLabelDelegate, VUIDownloadEntityDelegate> {

	id<VUIDownloadEntityTableViewCellDelegate> _delegate;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;
	VUILabel* _titleLabel;
	_TVImageView* _posterImageView;
	VUILabel* _metaDataHeaderFirstLabel;
	VUILabel* _metaDataHeaderSecondLabel;
	VUILabel* _dotSeparatorLabel;
	VUIImageView* _rightImageView;
	VUIDownloadButton* _downloadButton;
	_TVImageView* _episodeImageView;
	VUIDownloadEntity* _downloadEntity;

}

@property (nonatomic,retain) VUILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * posterImageView;                                          //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,retain) VUILabel * metaDataHeaderFirstLabel;                                     //@synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel - In the implementation block
@property (nonatomic,retain) VUILabel * metaDataHeaderSecondLabel;                                    //@synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                            //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) VUIImageView * rightImageView;                                           //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                      //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) _TVImageView * episodeImageView;                                         //@synthesize episodeImageView=_episodeImageView - In the implementation block
@property (nonatomic,retain) VUIDownloadEntity * downloadEntity;                                      //@synthesize downloadEntity=_downloadEntity - In the implementation block
@property (assign,nonatomic,__weak) id<VUIDownloadEntityTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                                     //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;                                  //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureVUIDownloadEntityTableViewCell:(id)arg1 withDownloadEntity:(id)arg2 ;
+(id)_episodePlaceholderImage;
+(id)_entityPlaceholderImageForDownloadEntity:(id)arg1 ;
-(void)setPosterImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)posterImageView;
-(void)setDelegate:(id<VUIDownloadEntityTableViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(id<VUIDownloadEntityTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(VUIDownloadButton *)downloadButton;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)_addDownloadButtonIfRequired:(id)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
-(void)setDownloadEntity:(VUIDownloadEntity *)arg1 ;
-(double)_imageHeightForCurrentSizeClass;
-(id)_expirationLabelWithMediaEntity:(id)arg1 ;
-(void)setMetaDataHeaderFirstLabel:(VUILabel *)arg1 ;
-(void)setMetaDataHeaderSecondLabel:(VUILabel *)arg1 ;
-(VUILabel *)metaDataHeaderFirstLabel;
-(VUILabel *)metaDataHeaderSecondLabel;
-(void)setRightImageView:(VUIImageView *)arg1 ;
-(_TVImageView *)episodeImageView;
-(void)setEpisodeImageView:(_TVImageView *)arg1 ;
-(void)_removeDownloadButtonIfRequired;
-(VUIDownloadEntity *)downloadEntity;
-(VUIImageView *)rightImageView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)_configureViewElementsForAX;
-(CGSize)_layoutForCategoryAccessibility:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_layoutForCompact:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(double)_verticalPaddingForCurrentSizeClass;
-(void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2 ;
-(void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSArray, VUIProductMetadataLayout;

@interface VUIProductSectionInfoViewModel : NSObject {

	UIView* _headerView;
	NSArray* _dataViews;
	VUIProductMetadataLayout* _layout;

}

@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                            //@synthesize dataViews=_dataViews - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4 ;
-(VUIProductMetadataLayout *)layout;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setLayout:(VUIProductMetadataLayout *)arg1 ;
-(NSArray *)dataViews;
-(void)setDataViews:(NSArray *)arg1 ;
@end


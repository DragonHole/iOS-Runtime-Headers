/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, SKUIClientContext;

@interface SKUICellLayout : NSObject {

	UIView* _cell;
	SKUIClientContext* _clientContext;
	UIView* _contentView;
	BOOL _parentWantsCellNeedsLayout;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * parentCellView;               //@synthesize cell=_cell - In the implementation block
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(UIView *)contentView;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)resetLayout;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(UIView *)parentCellView;
@end


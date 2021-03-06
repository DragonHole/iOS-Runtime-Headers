/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface CKDetailsCell : UITableViewCell {

	BOOL _indentTopSeperator;
	BOOL _indentBottomSeperator;
	UIView* _topSeperator;
	UIView* _bottomSeperator;

}

@property (nonatomic,retain) UIView * topSeperator;                   //@synthesize topSeperator=_topSeperator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeperator;                //@synthesize bottomSeperator=_bottomSeperator - In the implementation block
@property (assign,nonatomic) BOOL indentTopSeperator;                 //@synthesize indentTopSeperator=_indentTopSeperator - In the implementation block
@property (assign,nonatomic) BOOL indentBottomSeperator;              //@synthesize indentBottomSeperator=_indentBottomSeperator - In the implementation block
-(BOOL)indentTopSeperator;
-(UIView *)topSeperator;
-(BOOL)indentBottomSeperator;
-(UIView *)bottomSeperator;
-(void)setIndentTopSeperator:(BOOL)arg1 ;
-(void)setIndentBottomSeperator:(BOOL)arg1 ;
-(void)setTopSeperator:(UIView *)arg1 ;
-(void)setBottomSeperator:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


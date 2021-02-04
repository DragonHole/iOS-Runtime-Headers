/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HKDisplayTypeContextViewDelegate.h>

@protocol HKDisplayTypeContextTableViewCellDelegate;
@class HKDisplayTypeContextView, NSArray, NSString;

@interface HKDisplayTypeContextTableViewCell : UITableViewCell <HKDisplayTypeContextViewDelegate> {

	HKDisplayTypeContextView* _contextView;
	NSArray* _displayTypeContextItems;
	id<HKDisplayTypeContextTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * displayTypeContextItems;                                            //@synthesize displayTypeContextItems=_displayTypeContextItems - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setupView;
-(void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2 ;
-(void)setDisplayTypeContextItems:(NSArray *)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(NSArray *)displayTypeContextItems;
-(void)setDelegate:(id<HKDisplayTypeContextTableViewCellDelegate>)arg1 ;
-(id<HKDisplayTypeContextTableViewCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

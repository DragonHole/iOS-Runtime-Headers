/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UISegmentedControl;

@interface CKConversationListFilterCell : UITableViewCell {

	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;              //@synthesize filterControl=_filterControl - In the implementation block
+(id)identifier;
+(double)defaultHeight;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)filterControl;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


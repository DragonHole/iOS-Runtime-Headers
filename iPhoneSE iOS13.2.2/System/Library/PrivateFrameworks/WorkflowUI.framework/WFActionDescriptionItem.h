/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface WFActionDescriptionItem : NSObject {

	NSString* _itemTitle;
	NSAttributedString* _itemDescription;

}

@property (nonatomic,readonly) NSString * itemTitle;                              //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,readonly) NSAttributedString * itemDescription;              //@synthesize itemDescription=_itemDescription - In the implementation block
+(id)itemWithTitle:(id)arg1 description:(id)arg2 ;
+(id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2 ;
-(NSString *)itemTitle;
-(NSAttributedString *)itemDescription;
-(id)initWithTitle:(id)arg1 description:(id)arg2 ;
@end


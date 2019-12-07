/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, NSString;

@interface CNUIFamilyMemberDowntimeContactItem : NSObject {

	BOOL _selected;
	CNContact* _contact;
	NSString* _label;

}

@property (nonatomic,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
-(NSString *)label;
-(CNContact *)contact;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)initWithContact:(id)arg1 label:(id)arg2 ;
@end

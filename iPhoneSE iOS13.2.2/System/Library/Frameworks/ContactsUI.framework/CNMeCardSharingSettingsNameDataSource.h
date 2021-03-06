/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeCardSharingSectionDataSource.h>

@class CNContact, NSArray, NSString;

@interface CNMeCardSharingSettingsNameDataSource : NSObject <CNMeCardSharingSectionDataSource> {

	CNContact* _contact;
	NSArray* _items;
	NSString* _formattedName;

}

@property (nonatomic,retain) CNContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * formattedName;                        //@synthesize formattedName=_formattedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long selectedIndex; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(NSString *)formattedName;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
@end


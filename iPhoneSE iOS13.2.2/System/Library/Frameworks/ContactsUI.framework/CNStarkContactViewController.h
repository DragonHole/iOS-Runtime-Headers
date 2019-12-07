/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup, NSArray, CNStarkContactNameView;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {

	CNPropertyBestIDSValueQuery* _bestiMessageQuery;
	CNCardiMessageEmailGroup* _iMessageEmailGroup;
	NSArray* _activatedConstraints;
	CNStarkContactNameView* _contactNameView;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestiMessageQuery;              //@synthesize bestiMessageQuery=_bestiMessageQuery - In the implementation block
@property (nonatomic,retain) CNCardiMessageEmailGroup * iMessageEmailGroup;                //@synthesize iMessageEmailGroup=_iMessageEmailGroup - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNStarkContactNameView * contactNameView;                     //@synthesize contactNameView=_contactNameView - In the implementation block
+(long long)tableViewStyle;
+(BOOL)enablesTransportButtons;
-(void)dealloc;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)initWithContact:(id)arg1 ;
-(void)setupConstraints;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(void)updateFontColors;
-(id)displayHeaderView;
-(void)loadContactViewControllerViews;
-(BOOL)shouldDisplayAvatarHeaderView;
-(CGSize)setupTableHeaderView;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg1 ;
-(void)initializeTableViewsForHeaderHeight;
-(id)applyContactStyle;
-(void)queryComplete;
-(BOOL)isGeminiAvailable;
-(BOOL)hasTableViewHeaderFirstSection;
-(void)_initiateBestiMessagePropertyQuery;
-(CNPropertyBestIDSValueQuery *)bestiMessageQuery;
-(void)setBestiMessageQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(CNCardiMessageEmailGroup *)iMessageEmailGroup;
-(void)setIMessageEmailGroup:(CNCardiMessageEmailGroup *)arg1 ;
-(CNStarkContactNameView *)contactNameView;
-(void)setContactNameView:(CNStarkContactNameView *)arg1 ;
@end

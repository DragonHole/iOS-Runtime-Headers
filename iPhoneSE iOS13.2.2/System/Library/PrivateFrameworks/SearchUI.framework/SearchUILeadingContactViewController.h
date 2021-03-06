/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUILeadingViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class SearchUIContactsThumbnailView, NSString;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>

@property (nonatomic,retain) SearchUIContactsThumbnailView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(void)hide;
-(void)updateWithContacts:(id)arg1 ;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
@end


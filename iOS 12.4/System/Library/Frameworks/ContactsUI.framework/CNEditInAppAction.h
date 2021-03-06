/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction {

	CNUIUserActivityManager* _activityManager;

}

@property (nonatomic,readonly) CNUIUserActivityManager * activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithContact:(id)arg1 activityManager:(id)arg2 ;
-(CNUIUserActivityManager *)activityManager;
-(id)title;
@end


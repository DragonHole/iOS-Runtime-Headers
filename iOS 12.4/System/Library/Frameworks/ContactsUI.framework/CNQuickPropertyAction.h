/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(CNPropertyAction *)propertyAction;
-(id)propertyItem;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(unsigned long long)score;
-(id)identifier;
-(BOOL)enabled;
@end


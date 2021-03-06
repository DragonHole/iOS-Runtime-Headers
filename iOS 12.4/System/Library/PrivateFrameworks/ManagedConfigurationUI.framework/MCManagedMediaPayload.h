/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

@interface MCManagedMediaPayload : MCPayload {

	MCBook* _managedBook;

}

@property (nonatomic,retain) MCBook * managedBook;              //@synthesize managedBook=_managedBook - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(void)setManagedBook:(MCBook *)arg1 ;
-(MCBook *)managedBook;
-(id)initWithManagedMedia:(id)arg1 profile:(id)arg2 ;
-(id)title;
@end


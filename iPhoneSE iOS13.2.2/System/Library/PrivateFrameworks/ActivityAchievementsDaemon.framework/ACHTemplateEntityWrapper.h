/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACHTemplateEntitySyncedTemplatesObserver.h>

@protocol ACHTemplateEntitySyncedTemplatesObserver;
@class HDProfile, NSString;

@interface ACHTemplateEntityWrapper : NSObject <ACHTemplateEntitySyncedTemplatesObserver> {

	HDProfile* _profile;
	id<ACHTemplateEntitySyncedTemplatesObserver> _syncedTemplatesObserver;

}

@property (nonatomic,retain) HDProfile * profile;                                                                      //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;              //@synthesize syncedTemplatesObserver=_syncedTemplatesObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setSyncedTemplatesObserver:(id<ACHTemplateEntitySyncedTemplatesObserver>)arg1 ;
-(id)allTemplatesWithError:(id*)arg1 ;
-(BOOL)removeTemplates:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2 ;
-(id<ACHTemplateEntitySyncedTemplatesObserver>)syncedTemplatesObserver;
@end


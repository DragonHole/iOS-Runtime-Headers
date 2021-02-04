/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACHTemplateSource <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
@optional
-(void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)customPlaceholderValuesForTemplate:(id)arg1;
-(id)textureFilenameForTemplate:(id)arg1;
-(void)setDelegate:(id)arg1;
-(NSObject*<ACHTemplateSourceDelegate>)delegate;

@required
-(BOOL)sourceShouldRunForDate:(id)arg1;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2;
-(id)localizationBundleURLForTemplate:(id)arg1;
-(id)resourceBundleURLForTemplate:(id)arg1;
-(id)propertyListBundleURLForTemplate:(id)arg1;
-(id)stickerBundleURLForTemplate:(id)arg1;
-(long long)runCadence;
-(NSString *)identifier;

@end

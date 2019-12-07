/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger;


@protocol INSetTaskAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTask * targetTask; 
@property (nonatomic,copy) INSpeakableString * taskTitle; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@required
-(id)init;
-(long long)status;
-(long long)priority;
-(void)setPriority:(long long)arg1;
-(void)setStatus:(long long)arg1;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(INTask *)targetTask;
-(void)setTargetTask:(id)arg1;
-(INSpeakableString *)taskTitle;
-(void)setTaskTitle:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTaskList, NSArray, INSpatialEventTrigger, INTemporalEventTrigger;


@protocol INAddTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTaskList * targetTaskList; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(void)setSpatialEventTrigger:(id)arg1;
-(void)setTemporalEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTaskTitles:(id)arg1;
-(NSArray *)taskTitles;
-(void)setTargetTaskList:(id)arg1;
-(INTaskList *)targetTaskList;
-(id)init;

@end


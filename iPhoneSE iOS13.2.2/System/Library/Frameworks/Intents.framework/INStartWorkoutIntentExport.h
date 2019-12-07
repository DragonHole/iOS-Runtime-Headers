/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSNumber;


@protocol INStartWorkoutIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * workoutName; 
@property (nonatomic,copy) NSNumber * goalValue; 
@property (assign,nonatomic) long long workoutGoalUnitType; 
@property (assign,nonatomic) long long workoutLocationType; 
@property (nonatomic,copy) NSNumber * isOpenEnded; 
@required
-(id)init;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(id)arg1;
-(NSNumber *)goalValue;
-(void)setGoalValue:(id)arg1;
-(NSNumber *)isOpenEnded;
-(void)setIsOpenEnded:(id)arg1;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INSearchForTimersIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * matchedTimers; 
@property (nonatomic,copy) NSArray * unmatchedTimers; 
@required
-(void)setMatchedTimers:(id)arg1;
-(void)setUnmatchedTimers:(id)arg1;
-(NSArray *)matchedTimers;
-(NSArray *)unmatchedTimers;
-(long long)code;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFTimeEventBuilder.h>

@class NSString, NSDateComponents;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder> {

	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;

}

@property (nonatomic,copy) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3 ;
-(id)buildNewEventFromCurrentState;
-(NSString *)significantEvent;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(NSString *)description;
-(id)initWithEvent:(id)arg1 ;
-(id)performValidation;
@end


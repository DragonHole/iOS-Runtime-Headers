/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject {

	SGMFoundInAppsICS* _foundInAppsICS;

}

@property (nonatomic,retain) SGMFoundInAppsICS * foundInAppsICS;              //@synthesize foundInAppsICS=_foundInAppsICS - In the implementation block
+(id)instance;
+(void)recordWithTimezoneValue:(SGMFoundInAppsICSTZValue_)arg1 datetimeType:(SGMFoundInAppsDatetimeType_)arg2 ;
-(id)init;
-(SGMFoundInAppsICS *)foundInAppsICS;
-(void)setFoundInAppsICS:(SGMFoundInAppsICS *)arg1 ;
@end

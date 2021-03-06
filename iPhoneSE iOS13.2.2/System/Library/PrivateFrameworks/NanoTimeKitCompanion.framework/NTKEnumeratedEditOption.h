/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (nonatomic,readonly) unsigned long long _value; 
+(unsigned long long)numberOfOptionsForDevice:(id)arg1 ;
+(id)optionAtIndex:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(unsigned long long)indexOfOption:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg1 ;
+(id)optionsRestrictedByDevice:(id)arg1 ;
@end


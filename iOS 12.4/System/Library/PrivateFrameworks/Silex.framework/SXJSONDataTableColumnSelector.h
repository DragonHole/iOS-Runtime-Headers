/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONDataTableSelector.h>
#import <libobjc.A.dylib/SXDataTableColumnSelector.h>

@class NSString;

@interface SXJSONDataTableColumnSelector : SXJSONDataTableSelector <SXDataTableColumnSelector>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
@property (nonatomic,readonly) unsigned long long even; 
@property (nonatomic,readonly) unsigned long long odd; 
-(unsigned long long)odd;
-(unsigned long long)even;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
-(unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2 ;
@end


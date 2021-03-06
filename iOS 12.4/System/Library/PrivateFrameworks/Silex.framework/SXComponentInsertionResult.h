/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXBlueprintMarker;
@class SXComponentInsert;

@interface SXComponentInsertionResult : NSObject {

	SXComponentInsert* _insert;
	id<SXBlueprintMarker> _marker;

}

@property (nonatomic,readonly) SXComponentInsert * insert;                //@synthesize insert=_insert - In the implementation block
@property (nonatomic,readonly) id<SXBlueprintMarker> marker;              //@synthesize marker=_marker - In the implementation block
-(id)initWithInsert:(id)arg1 marker:(id)arg2 ;
-(SXComponentInsert *)insert;
-(id<SXBlueprintMarker>)marker;
@end


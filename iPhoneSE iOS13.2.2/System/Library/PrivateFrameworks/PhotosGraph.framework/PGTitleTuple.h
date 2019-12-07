/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGTitle, NSArray;

@interface PGTitleTuple : NSObject {

	PGTitle* _title;
	PGTitle* _subtitle;
	NSArray* _locationNames;

}

@property (nonatomic,readonly) PGTitle * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * locationNames;              //@synthesize locationNames=_locationNames - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(PGTitle *)title;
-(PGTitle *)subtitle;
-(NSArray *)locationNames;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3 ;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end

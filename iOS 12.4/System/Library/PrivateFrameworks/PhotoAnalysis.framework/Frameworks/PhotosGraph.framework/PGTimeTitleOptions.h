/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	BOOL _filterDates;
	NSSet* _eventNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * eventNodes;                             //@synthesize eventNodes=_eventNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                          //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;              //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) BOOL filterDates;                               //@synthesize filterDates=_filterDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
-(void)setEventNodes:(NSSet *)arg1 ;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(void)setFilterDates:(BOOL)arg1 ;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(NSSet *)eventNodes;
-(NSSet *)locationNodes;
-(unsigned long long)allowedFormats;
-(BOOL)filterDates;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLocale;


@protocol PLMutableDateRangeFormatter <NSObject>
@property (assign,nonatomic) BOOL autoUpdateOnChanges; 
@property (assign,nonatomic) BOOL useLocalDates; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL shouldOmitYear; 
@required
-(void)setLocale:(id)arg1;
-(NSLocale *)locale;
-(void)configureForFormatPreset:(unsigned long long)arg1;
-(BOOL)autoUpdateOnChanges;
-(void)setAutoUpdateOnChanges:(BOOL)arg1;
-(BOOL)useLocalDates;
-(void)setUseLocalDates:(BOOL)arg1;
-(BOOL)shouldOmitYear;
-(void)setShouldOmitYear:(BOOL)arg1;

@end


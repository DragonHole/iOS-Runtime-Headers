/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicLibraryViewConfiguration;

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration {

	MusicLibraryViewConfiguration* _compactWidthConfiguration;
	MusicLibraryViewConfiguration* _regularWidthConfiguration;

}

@property (nonatomic,readonly) MusicLibraryViewConfiguration * compactWidthConfiguration; 
@property (nonatomic,readonly) MusicLibraryViewConfiguration * regularWidthConfiguration; 
-(MusicLibraryViewConfiguration *)compactWidthConfiguration;
-(MusicLibraryViewConfiguration *)regularWidthConfiguration;
-(void)enumerateContentViewConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AEGridEnvironment : NSObject {

	double _headerHeight;
	double _targetBottomMargin;
	double _minimumTileHeight;
	double _scale;
	double _compactExtensionHeight;

}

@property (assign,nonatomic) double headerHeight;                        //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double targetBottomMargin;                  //@synthesize targetBottomMargin=_targetBottomMargin - In the implementation block
@property (assign,nonatomic) double minimumTileHeight;                   //@synthesize minimumTileHeight=_minimumTileHeight - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double compactExtensionHeight;              //@synthesize compactExtensionHeight=_compactExtensionHeight - In the implementation block
-(void)setCompactExtensionHeight:(double)arg1 ;
-(void)setMinimumTileHeight:(double)arg1 ;
-(double)targetBottomMargin;
-(double)minimumTileHeight;
-(double)compactExtensionHeight;
-(void)setTargetBottomMargin:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(double)scale;
-(unsigned long long)hash;
-(void)setScale:(double)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
@end


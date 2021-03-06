/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject;

@interface DOCThumbnailKey : NSObject <NSCopying> {

	BOOL _isInteractive;
	NSObject*<NSCopying> _primaryKey;
	double _minimumSize;
	double _scale;
	unsigned long long _style;
	CGSize _size;

}

@property (nonatomic,readonly) NSObject*<NSCopying> primaryKey;              //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double minimumSize;                           //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,readonly) double scale;                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL isInteractive;                           //@synthesize isInteractive=_isInteractive - In the implementation block
-(NSObject*<NSCopying>)primaryKey;
-(id)initWithPrimaryKey:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 isInteractive:(BOOL)arg6 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(double)scale;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(double)minimumSize;
-(BOOL)isInteractive;
@end


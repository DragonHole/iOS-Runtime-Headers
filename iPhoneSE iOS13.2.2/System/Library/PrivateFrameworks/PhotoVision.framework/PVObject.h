/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PVObject : NSObject <NSCopying> {

	NSString* _localIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localIdentifier;
-(id)initWithLocalIdentifier:(id)arg1 ;
@end

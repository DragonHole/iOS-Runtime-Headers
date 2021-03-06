/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying> {

	unsigned long long _packFrom;
	unsigned long long _packingOrder;
	CCUILayoutSize _sizeLimit;

}

@property (nonatomic,readonly) unsigned long long packFrom;                  //@synthesize packFrom=_packFrom - In the implementation block
@property (nonatomic,readonly) unsigned long long packingOrder;              //@synthesize packingOrder=_packingOrder - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize sizeLimit;                     //@synthesize sizeLimit=_sizeLimit - In the implementation block
-(id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(CCUILayoutSize)arg3 ;
-(unsigned long long)packFrom;
-(unsigned long long)packingOrder;
-(CCUILayoutSize)sizeLimit;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


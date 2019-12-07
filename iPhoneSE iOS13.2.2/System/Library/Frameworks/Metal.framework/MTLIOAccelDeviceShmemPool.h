/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface MTLIOAccelDeviceShmemPool : NSObject {

	MTLIOAccelDeviceShmemPoolPrivate* _priv;

}
-(void)dealloc;
-(void)purge;
-(void)prune;
-(unsigned)shmemSize;
-(int)availableCount;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned)arg3 options:(id)arg4 ;
-(void)setShmemSize:(unsigned)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned long long _length;
	void* _bytes;
	/*^block*/id _deallocator;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(BOOL)_providesConcreteBacking;
-(BOOL)_copyWillRetain;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)getBytes:(void*)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVInstructionGraphImageSourceNode;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PV0;

typedef const struct HGRef<HGRenderer>* HGRef<HGRenderer>Ref;

typedef struct _compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct _split_buffer<unsigned long *, std::__1::allocator<unsigned long *> > {
	unsigned long long __first_;
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> > __end_cap_;
} split_buffer<unsigned long *, std::__1::allocator<unsigned long *> >;

typedef struct deque<unsigned long, std::__1::allocator<unsigned long> > {
	split_buffer<unsigned long *, std::__1::allocator<unsigned long *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<unsigned long> > __size_;
} deque<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > > {
	deque<unsigned long, std::__1::allocator<unsigned long> > c;
} stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > >;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *>* PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct HGRef<PVRenderManager> {
	PVRenderManager m_Obj;
} HGRef<PVRenderManager>;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > >;

typedef struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > > {
	tree<std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PVInstructionGraphNode *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PVInstructionGraphNode *> > > __tree_;
} map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *> > >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	double x;
	double y;
	double z;
	double w;
} SCD_Struct_PV19;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PV20;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	SCD_Struct_PV20 start;
	SCD_Struct_PV20 duration;
} SCD_Struct_PV25;

typedef struct {
	int width;
	int height;
} SCD_Struct_PV26;

typedef struct HGRef<HGCVPixelBuffer> {
	HGCVPixelBuffer m_Obj;
} HGRef<HGCVPixelBuffer>;

typedef struct HGRef<HGBitmap> {
	HGBitmap m_Obj;
} HGRef<HGBitmap>;

typedef struct atomic<unsigned int> {
	AI __a_;
} atomic<unsigned int>;

typedef struct _compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > {
	HGRef<PVRenderJob> __value_;
} compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > >;

typedef struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > > {
	HGRef<PVRenderJob> __begin_;
	HGRef<PVRenderJob> __end_;
	compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > __end_cap_;
} vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >;

typedef struct _compressed_pair<unsigned long, LoadableInstructionCompare> {
	unsigned long long __value_;
} compressed_pair<unsigned long, LoadableInstructionCompare>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > >;

typedef struct _tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > __pair1_;
	compressed_pair<unsigned long, LoadableInstructionCompare> __pair3_;
} tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >;

typedef struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > {
	tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > __tree_;
} set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >;

typedef struct _tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __ptr_;
} tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long>;

typedef struct HGRef<PVInstructionGraphContext> {
	PVInstructionGraphContext m_Obj;
} HGRef<PVInstructionGraphContext>;

typedef struct _compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > {
	HGRef<HGBitmap> __value_;
} compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > >;

typedef struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > {
	HGRef<HGBitmap> __begin_;
	HGRef<HGBitmap> __end_;
	compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > __end_cap_;
} vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >;

typedef struct CachedImageInfo {
	BOOL cached;
	CGSize size;
	BOOL imageExists;
	PVInstructionGraphImageSourceNode* _source;
	HGSynchronizable _lock;
} CachedImageInfo;

typedef struct PerfTimer {
	double _start;
	double _end;
} PerfTimer;

typedef struct _NSZone* NSZoneRef;

typedef struct PVTransformAnimationInfo {
	SCD_Struct_PV20 time;
	CGPoint translation;
	double scale;
	double rotation;
} PVTransformAnimationInfo;

typedef struct _compressed_pair<HGRef<PVCVPixelBufferPool> *, std::__1::allocator<HGRef<PVCVPixelBufferPool> > > {
	HGRef<PVCVPixelBufferPool> __value_;
} compressed_pair<HGRef<PVCVPixelBufferPool> *, std::__1::allocator<HGRef<PVCVPixelBufferPool> > >;

typedef struct vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool> > > {
	HGRef<PVCVPixelBufferPool> __begin_;
	HGRef<PVCVPixelBufferPool> __end_;
	compressed_pair<HGRef<PVCVPixelBufferPool> *, std::__1::allocator<HGRef<PVCVPixelBufferPool> > > __end_cap_;
} vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool> > >;

typedef struct HGRef<HGCVPixelBufferPool> {
	HGCVPixelBufferPool m_Obj;
} HGRef<HGCVPixelBufferPool>;

typedef struct HGRef<HGNode> {
	HGNode m_Obj;
} HGRef<HGNode>;

typedef struct HGRef<HGCVBitmap> {
	HGCVBitmap m_Obj;
} HGRef<HGCVBitmap>;

typedef struct PVImageProperties {
	unsigned cvPixelFormat;
	int bitsPerPixel;
	unsigned alphaInfo;
	CGColorSpace cgColorSpaceRef;
} PVImageProperties;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *> > >;

typedef struct _tree<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true>, std::__1::allocator<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true> > __pair3_;
} tree<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true>, std::__1::allocator<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >;

typedef struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > > {
	tree<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__1::less<PVSPI_OSThermalPressureLevel>, true>, std::__1::allocator<std::__1::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > > __tree_;
} map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >;

typedef struct _compressed_pair<int **, std::__1::allocator<int *> > {
	int __value_;
} compressed_pair<int **, std::__1::allocator<int *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<int> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<int> >;

typedef struct _split_buffer<int *, std::__1::allocator<int *> > {
	int __first_;
	int __begin_;
	int __end_;
	compressed_pair<int **, std::__1::allocator<int *> > __end_cap_;
} split_buffer<int *, std::__1::allocator<int *> >;

typedef struct deque<int, std::__1::allocator<int> > {
	split_buffer<int *, std::__1::allocator<int *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<int> > __size_;
} deque<int, std::__1::allocator<int> >;

typedef struct HGRef<HGGLTexture> {
	HGGLTexture m_Obj;
} HGRef<HGGLTexture>;

typedef struct HGRef<HGRenderJob> {
	HGRenderJob m_Obj;
} HGRef<HGRenderJob>;

typedef struct FigTime {
	SCD_Struct_PV20 _t;
} FigTime;

typedef struct METimeRemap {
	FigTime _introDuration;
	FigTime _outroDuration;
	FigTime _scaleableDuration;
	BOOL _isIntroOptional;
	BOOL _isOutroOptional;
	BOOL _isStartTimeAligned;
	BOOL _isEndTimeAligned;
	BOOL _isLoop;
	BOOL _forceDisableLoop;
	BOOL _forceDisableBuildAnimation;
	OZChannelBool _pBuildInEnableChan;
	OZChannelBool _pBuildOutEnableChan;
} METimeRemap;

typedef struct atomic<DocLoadStatus> {
	Ai __a_;
} atomic<DocLoadStatus>;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	SCD_Struct_PV20 field1;
	SCD_Struct_PV20 field2;
	SCD_Struct_PV20 field3;
} SCD_Struct_PV64;

typedef struct _compressed_pair<PVGCDReadWriteLock *, std::__1::default_delete<PVGCDReadWriteLock> > {
	PVGCDReadWriteLock __value_;
} compressed_pair<PVGCDReadWriteLock *, std::__1::default_delete<PVGCDReadWriteLock> >;

typedef struct unique_ptr<PVGCDReadWriteLock, std::__1::default_delete<PVGCDReadWriteLock> > {
	compressed_pair<PVGCDReadWriteLock *, std::__1::default_delete<PVGCDReadWriteLock> > __ptr_;
} unique_ptr<PVGCDReadWriteLock, std::__1::default_delete<PVGCDReadWriteLock> >;

typedef struct _compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > {
	PVGCDLock __value_;
} compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> >;

typedef struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > {
	compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > __ptr_;
} unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> > > >;

typedef struct map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource> > > > {
	tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> > > > __tree_;
} map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource> > > >;

typedef struct HGRef<HGRenderQueue> {
	HGRenderQueue m_Obj;
} HGRef<HGRenderQueue>;

typedef struct _compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer> > {
	PerfTimer __value_;
} compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer> >;

typedef struct unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer> > {
	compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer> > __ptr_;
} unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer> >;

typedef struct _compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats> > {
	PVPerfStats __value_;
} compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats> >;

typedef struct unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats> > {
	compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats> > __ptr_;
} unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats> >;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	double field3;
	/*function pointer*/void*) field4;
	unsigned long long field5;
	unsigned long long field6;
	double field7;
	double field8;
	unsigned long long field9;
} SCD_Struct_PA78;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	BOOL field8;
	double field9;
} SCD_Struct_PA79;

typedef struct TDColor3 {
	float one;
	float two;
	float three;
} TDColor3;

typedef struct _compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> > {
	FracturedFXPoolItem __value_;
} compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> >;

typedef struct vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> > {
	FracturedFXPoolItem __begin_;
	FracturedFXPoolItem __end_;
	compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> > __end_cap_;
} vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> >;

typedef struct PCMutex {
	/*function pointer*/void* _vptr$PCMutex;
	opaque_pthread_mutex_t _Mutex;
} PCMutex;

typedef struct HGRef<HStyleTransfer> {
	HStyleTransfer m_Obj;
} HGRef<HStyleTransfer>;

typedef struct IPImage {
	CGRect fullRect;
	CGRect imageRect;
	float xScale;
	float yScale;
	unsigned textureID;
	unsigned textureTarget;
	unsigned textureInternalFormat;
	unsigned textureFormat;
	unsigned textureType;
	unsigned textureUnit;
	unsigned drawFBO;
} IPImage;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef union {
	double frame;
	/*function pointer*/void* seconds;
} SCD_Union_PA87;

typedef struct PCRecursiveMutex {
	/*function pointer*/void* _vptr$PCMutex;
	opaque_pthread_mutex_t _Mutex;
} PCRecursiveMutex;

typedef struct __CFString* CFStringRef;

typedef struct __CFUUID* CFUUIDRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
} SCD_Struct_PC92;

// Namespaced Header

#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(SIGMAPOINT, symbol)
#endif


// Classes
#ifndef AFCompoundResponseSerializer
#define AFCompoundResponseSerializer __NS_SYMBOL(AFCompoundResponseSerializer)
#endif

#ifndef AFHTTPBodyPart
#define AFHTTPBodyPart __NS_SYMBOL(AFHTTPBodyPart)
#endif

#ifndef AFHTTPRequestOperation
#define AFHTTPRequestOperation __NS_SYMBOL(AFHTTPRequestOperation)
#endif

#ifndef AFHTTPRequestOperationManager
#define AFHTTPRequestOperationManager __NS_SYMBOL(AFHTTPRequestOperationManager)
#endif

#ifndef AFHTTPRequestSerializer
#define AFHTTPRequestSerializer __NS_SYMBOL(AFHTTPRequestSerializer)
#endif

#ifndef AFHTTPResponseSerializer
#define AFHTTPResponseSerializer __NS_SYMBOL(AFHTTPResponseSerializer)
#endif

#ifndef AFHTTPSessionManager
#define AFHTTPSessionManager __NS_SYMBOL(AFHTTPSessionManager)
#endif

#ifndef AFImageCache
#define AFImageCache __NS_SYMBOL(AFImageCache)
#endif

#ifndef AFImageResponseSerializer
#define AFImageResponseSerializer __NS_SYMBOL(AFImageResponseSerializer)
#endif

#ifndef AFJSONRequestSerializer
#define AFJSONRequestSerializer __NS_SYMBOL(AFJSONRequestSerializer)
#endif

#ifndef AFJSONResponseSerializer
#define AFJSONResponseSerializer __NS_SYMBOL(AFJSONResponseSerializer)
#endif

#ifndef AFMultipartBodyStream
#define AFMultipartBodyStream __NS_SYMBOL(AFMultipartBodyStream)
#endif

#ifndef AFNetworkActivityIndicatorManager
#define AFNetworkActivityIndicatorManager __NS_SYMBOL(AFNetworkActivityIndicatorManager)
#endif

#ifndef AFNetworkReachabilityManager
#define AFNetworkReachabilityManager __NS_SYMBOL(AFNetworkReachabilityManager)
#endif

#ifndef AFOAuthCredential
#define AFOAuthCredential __NS_SYMBOL(AFOAuthCredential)
#endif

#ifndef AFPropertyListRequestSerializer
#define AFPropertyListRequestSerializer __NS_SYMBOL(AFPropertyListRequestSerializer)
#endif

#ifndef AFPropertyListResponseSerializer
#define AFPropertyListResponseSerializer __NS_SYMBOL(AFPropertyListResponseSerializer)
#endif

#ifndef AFQueryStringPair
#define AFQueryStringPair __NS_SYMBOL(AFQueryStringPair)
#endif

#ifndef AFSecurityPolicy
#define AFSecurityPolicy __NS_SYMBOL(AFSecurityPolicy)
#endif

#ifndef AFStreamingMultipartFormData
#define AFStreamingMultipartFormData __NS_SYMBOL(AFStreamingMultipartFormData)
#endif

#ifndef AFURLConnectionOperation
#define AFURLConnectionOperation __NS_SYMBOL(AFURLConnectionOperation)
#endif

#ifndef AFURLSessionManager
#define AFURLSessionManager __NS_SYMBOL(AFURLSessionManager)
#endif

#ifndef AFURLSessionManagerTaskDelegate
#define AFURLSessionManagerTaskDelegate __NS_SYMBOL(AFURLSessionManagerTaskDelegate)
#endif

#ifndef AFXMLParserResponseSerializer
#define AFXMLParserResponseSerializer __NS_SYMBOL(AFXMLParserResponseSerializer)
#endif

#ifndef HSDatePickerViewController
#define HSDatePickerViewController __NS_SYMBOL(HSDatePickerViewController)
#endif

#ifndef BEMAnimationManager
#define BEMAnimationManager __NS_SYMBOL(BEMAnimationManager)
#endif

#ifndef BEMCheckBox
#define BEMCheckBox __NS_SYMBOL(BEMCheckBox)
#endif

#ifndef BEMPathManager
#define BEMPathManager __NS_SYMBOL(BEMPathManager)
#endif

#ifndef CRToast
#define CRToast __NS_SYMBOL(CRToast)
#endif

#ifndef CRToastContainerView
#define CRToastContainerView __NS_SYMBOL(CRToastContainerView)
#endif

#ifndef CRToastInteractionResponder
#define CRToastInteractionResponder __NS_SYMBOL(CRToastInteractionResponder)
#endif

#ifndef CRToastManager
#define CRToastManager __NS_SYMBOL(CRToastManager)
#endif

#ifndef CRToastSwipeGestureRecognizer
#define CRToastSwipeGestureRecognizer __NS_SYMBOL(CRToastSwipeGestureRecognizer)
#endif

#ifndef CRToastTapGestureRecognizer
#define CRToastTapGestureRecognizer __NS_SYMBOL(CRToastTapGestureRecognizer)
#endif

#ifndef CRToastView
#define CRToastView __NS_SYMBOL(CRToastView)
#endif

#ifndef CRToastViewController
#define CRToastViewController __NS_SYMBOL(CRToastViewController)
#endif

#ifndef CRToastWindow
#define CRToastWindow __NS_SYMBOL(CRToastWindow)
#endif

#ifndef DZNEmptyDataSetView
#define DZNEmptyDataSetView __NS_SYMBOL(DZNEmptyDataSetView)
#endif

#ifndef DZNPhotoDisplayViewCell
#define DZNPhotoDisplayViewCell __NS_SYMBOL(DZNPhotoDisplayViewCell)
#endif

#ifndef DZNPhotoDisplayViewController
#define DZNPhotoDisplayViewController __NS_SYMBOL(DZNPhotoDisplayViewController)
#endif

#ifndef DZNPhotoEditorContainerView
#define DZNPhotoEditorContainerView __NS_SYMBOL(DZNPhotoEditorContainerView)
#endif

#ifndef DZNPhotoEditorViewController
#define DZNPhotoEditorViewController __NS_SYMBOL(DZNPhotoEditorViewController)
#endif

#ifndef DZNPhotoMetadata
#define DZNPhotoMetadata __NS_SYMBOL(DZNPhotoMetadata)
#endif

#ifndef DZNPhotoPickerController
#define DZNPhotoPickerController __NS_SYMBOL(DZNPhotoPickerController)
#endif

#ifndef DZNPhotoServiceClient
#define DZNPhotoServiceClient __NS_SYMBOL(DZNPhotoServiceClient)
#endif

#ifndef DZNPhotoServiceFactory
#define DZNPhotoServiceFactory __NS_SYMBOL(DZNPhotoServiceFactory)
#endif

#ifndef DZNPhotoTag
#define DZNPhotoTag __NS_SYMBOL(DZNPhotoTag)
#endif

#ifndef GROAuth2SessionManager
#define GROAuth2SessionManager __NS_SYMBOL(GROAuth2SessionManager)
#endif

#ifndef Language
#define Language __NS_SYMBOL(Language)
#endif

#ifndef MBBarProgressView
#define MBBarProgressView __NS_SYMBOL(MBBarProgressView)
#endif

#ifndef MBProgressHUD
#define MBProgressHUD __NS_SYMBOL(MBProgressHUD)
#endif

#ifndef MBRoundProgressView
#define MBRoundProgressView __NS_SYMBOL(MBRoundProgressView)
#endif

#ifndef MDRadialProgressLabel
#define MDRadialProgressLabel __NS_SYMBOL(MDRadialProgressLabel)
#endif

#ifndef MDRadialProgressTheme
#define MDRadialProgressTheme __NS_SYMBOL(MDRadialProgressTheme)
#endif

#ifndef MDRadialProgressView
#define MDRadialProgressView __NS_SYMBOL(MDRadialProgressView)
#endif

#ifndef MPCAPICall
#define MPCAPICall __NS_SYMBOL(MPCAPICall)
#endif

#ifndef MPCDataModelHandler
#define MPCDataModelHandler __NS_SYMBOL(MPCDataModelHandler)
#endif

#ifndef MPCProfileManager
#define MPCProfileManager __NS_SYMBOL(MPCProfileManager)
#endif
#ifndef MPCTripsManager
#define MPCTripsManager __NS_SYMBOL(MPCTripsManager)
#endif


#ifndef NKDBarcode
#define NKDBarcode __NS_SYMBOL(NKDBarcode)
#endif

#ifndef NKDBarcodeOffscreenView
#define NKDBarcodeOffscreenView __NS_SYMBOL(NKDBarcodeOffscreenView)
#endif

#ifndef NKDCode128Barcode
#define NKDCode128Barcode __NS_SYMBOL(NKDCode128Barcode)
#endif

#ifndef Reachability
#define Reachability __NS_SYMBOL(Reachability)
#endif

#ifndef SDImageCache
#define SDImageCache __NS_SYMBOL(SDImageCache)
#endif

#ifndef SDWebImageCombinedOperation
#define SDWebImageCombinedOperation __NS_SYMBOL(SDWebImageCombinedOperation)
#endif

#ifndef SDWebImageDownloader
#define SDWebImageDownloader __NS_SYMBOL(SDWebImageDownloader)
#endif

#ifndef SDWebImageDownloaderOperation
#define SDWebImageDownloaderOperation __NS_SYMBOL(SDWebImageDownloaderOperation)
#endif

#ifndef SDWebImageManager
#define SDWebImageManager __NS_SYMBOL(SDWebImageManager)
#endif

#ifndef SDWebImagePrefetcher
#define SDWebImagePrefetcher __NS_SYMBOL(SDWebImagePrefetcher)
#endif

#ifndef SMXMLDocument
#define SMXMLDocument __NS_SYMBOL(SMXMLDocument)
#endif

#ifndef SMXMLDocumentResponseSerializer
#define SMXMLDocumentResponseSerializer __NS_SYMBOL(SMXMLDocumentResponseSerializer)
#endif

#ifndef SMXMLElement
#define SMXMLElement __NS_SYMBOL(SMXMLElement)
#endif

#ifndef SSKeychain
#define SSKeychain __NS_SYMBOL(SSKeychain)
#endif

#ifndef SSKeychainQuery
#define SSKeychainQuery __NS_SYMBOL(SSKeychainQuery)
#endif

#ifndef SampleLockSplashViewController
#define SampleLockSplashViewController __NS_SYMBOL(SampleLockSplashViewController)
#endif

//#ifndef VENTouchLock
//#define VENTouchLock __NS_SYMBOL(VENTouchLock)
//#endif
//
//#ifndef VENTouchLockAppearance
//#define VENTouchLockAppearance __NS_SYMBOL(VENTouchLockAppearance)
//#endif
//
//#ifndef VENTouchLockCreatePasscodeViewController
//#define VENTouchLockCreatePasscodeViewController __NS_SYMBOL(VENTouchLockCreatePasscodeViewController)
//#endif
//
//#ifndef VENTouchLockEnterPasscodeViewController
//#define VENTouchLockEnterPasscodeViewController __NS_SYMBOL(VENTouchLockEnterPasscodeViewController)
//#endif
//
//#ifndef VENTouchLockPasscodeCharacterView
//#define VENTouchLockPasscodeCharacterView __NS_SYMBOL(VENTouchLockPasscodeCharacterView)
//#endif
//
//#ifndef VENTouchLockPasscodeView
//#define VENTouchLockPasscodeView __NS_SYMBOL(VENTouchLockPasscodeView)
//#endif
//
//#ifndef VENTouchLockPasscodeViewController
//#define VENTouchLockPasscodeViewController __NS_SYMBOL(VENTouchLockPasscodeViewController)
//#endif
//
//#ifndef VENTouchLockSplashViewController
//#define VENTouchLockSplashViewController __NS_SYMBOL(VENTouchLockSplashViewController)
//#endif
//
//#ifndef VENTouchLockEnterPasscodeUserDefaultsKeyNumberOfConsecutivePasscodeAttempts
//#define VENTouchLockEnterPasscodeUserDefaultsKeyNumberOfConsecutivePasscodeAttempts __NS_SYMBOL(VENTouchLockEnterPasscodeUserDefaultsKeyNumberOfConsecutivePasscodeAttempts)
//#endif

#ifndef XLFormAction
#define XLFormAction __NS_SYMBOL(XLFormAction)
#endif

#ifndef XLFormBaseCell
#define XLFormBaseCell __NS_SYMBOL(XLFormBaseCell)
#endif

#ifndef XLFormButtonCell
#define XLFormButtonCell __NS_SYMBOL(XLFormButtonCell)
#endif

#ifndef XLFormCheckCell
#define XLFormCheckCell __NS_SYMBOL(XLFormCheckCell)
#endif

#ifndef XLFormDateCell
#define XLFormDateCell __NS_SYMBOL(XLFormDateCell)
#endif

#ifndef XLFormDatePickerCell
#define XLFormDatePickerCell __NS_SYMBOL(XLFormDatePickerCell)
#endif

#ifndef XLFormDescriptor
#define XLFormDescriptor __NS_SYMBOL(XLFormDescriptor)
#endif

#ifndef XLFormInlineSelectorCell
#define XLFormInlineSelectorCell __NS_SYMBOL(XLFormInlineSelectorCell)
#endif

#ifndef XLFormLeftRightSelectorCell
#define XLFormLeftRightSelectorCell __NS_SYMBOL(XLFormLeftRightSelectorCell)
#endif

#ifndef XLFormLeftRightSelectorOption
#define XLFormLeftRightSelectorOption __NS_SYMBOL(XLFormLeftRightSelectorOption)
#endif

#ifndef XLFormOptionsObject
#define XLFormOptionsObject __NS_SYMBOL(XLFormOptionsObject)
#endif

#ifndef XLFormOptionsViewController
#define XLFormOptionsViewController __NS_SYMBOL(XLFormOptionsViewController)
#endif

#ifndef XLFormPickerCell
#define XLFormPickerCell __NS_SYMBOL(XLFormPickerCell)
#endif

#ifndef XLFormRegexValidator
#define XLFormRegexValidator __NS_SYMBOL(XLFormRegexValidator)
#endif

#ifndef XLFormRightDetailCell
#define XLFormRightDetailCell __NS_SYMBOL(XLFormRightDetailCell)
#endif

#ifndef XLFormRightImageButton
#define XLFormRightImageButton __NS_SYMBOL(XLFormRightImageButton)
#endif

#ifndef XLFormRowDescriptor
#define XLFormRowDescriptor __NS_SYMBOL(XLFormRowDescriptor)
#endif

#ifndef XLFormRowNavigationAccessoryView
#define XLFormRowNavigationAccessoryView __NS_SYMBOL(XLFormRowNavigationAccessoryView)
#endif

#ifndef XLFormSectionDescriptor
#define XLFormSectionDescriptor __NS_SYMBOL(XLFormSectionDescriptor)
#endif

#ifndef XLFormSegmentedCell
#define XLFormSegmentedCell __NS_SYMBOL(XLFormSegmentedCell)
#endif

#ifndef XLFormSelectorCell
#define XLFormSelectorCell __NS_SYMBOL(XLFormSelectorCell)
#endif

#ifndef XLFormSliderCell
#define XLFormSliderCell __NS_SYMBOL(XLFormSliderCell)
#endif

#ifndef XLFormStepCounterCell
#define XLFormStepCounterCell __NS_SYMBOL(XLFormStepCounterCell)
#endif

#ifndef XLFormSwitchCell
#define XLFormSwitchCell __NS_SYMBOL(XLFormSwitchCell)
#endif

#ifndef XLFormTextFieldCell
#define XLFormTextFieldCell __NS_SYMBOL(XLFormTextFieldCell)
#endif

#ifndef XLFormTextView
#define XLFormTextView __NS_SYMBOL(XLFormTextView)
#endif

#ifndef XLFormTextViewCell
#define XLFormTextViewCell __NS_SYMBOL(XLFormTextViewCell)
#endif

#ifndef XLFormValidationStatus
#define XLFormValidationStatus __NS_SYMBOL(XLFormValidationStatus)
#endif

#ifndef XLFormValidator
#define XLFormValidator __NS_SYMBOL(XLFormValidator)
#endif

#ifndef XLFormViewController
#define XLFormViewController __NS_SYMBOL(XLFormViewController)
#endif

#ifndef ZXAI013103decoder
#define ZXAI013103decoder __NS_SYMBOL(ZXAI013103decoder)
#endif

#ifndef ZXAI01320xDecoder
#define ZXAI01320xDecoder __NS_SYMBOL(ZXAI01320xDecoder)
#endif

#ifndef ZXAI01392xDecoder
#define ZXAI01392xDecoder __NS_SYMBOL(ZXAI01392xDecoder)
#endif

#ifndef ZXAI01393xDecoder
#define ZXAI01393xDecoder __NS_SYMBOL(ZXAI01393xDecoder)
#endif

#ifndef ZXAI013x0x1xDecoder
#define ZXAI013x0x1xDecoder __NS_SYMBOL(ZXAI013x0x1xDecoder)
#endif

#ifndef ZXAI013x0xDecoder
#define ZXAI013x0xDecoder __NS_SYMBOL(ZXAI013x0xDecoder)
#endif

#ifndef ZXAI01AndOtherAIs
#define ZXAI01AndOtherAIs __NS_SYMBOL(ZXAI01AndOtherAIs)
#endif

#ifndef ZXAI01decoder
#define ZXAI01decoder __NS_SYMBOL(ZXAI01decoder)
#endif

#ifndef ZXAI01weightDecoder
#define ZXAI01weightDecoder __NS_SYMBOL(ZXAI01weightDecoder)
#endif

#ifndef ZXAbstractDoCoMoResultParser
#define ZXAbstractDoCoMoResultParser __NS_SYMBOL(ZXAbstractDoCoMoResultParser)
#endif

#ifndef ZXAbstractExpandedDecoder
#define ZXAbstractExpandedDecoder __NS_SYMBOL(ZXAbstractExpandedDecoder)
#endif

#ifndef ZXAbstractRSSReader
#define ZXAbstractRSSReader __NS_SYMBOL(ZXAbstractRSSReader)
#endif

#ifndef ZXAddressBookAUResultParser
#define ZXAddressBookAUResultParser __NS_SYMBOL(ZXAddressBookAUResultParser)
#endif

#ifndef ZXAddressBookDoCoMoResultParser
#define ZXAddressBookDoCoMoResultParser __NS_SYMBOL(ZXAddressBookDoCoMoResultParser)
#endif

#ifndef ZXAddressBookParsedResult
#define ZXAddressBookParsedResult __NS_SYMBOL(ZXAddressBookParsedResult)
#endif

#ifndef ZXAnyAIDecoder
#define ZXAnyAIDecoder __NS_SYMBOL(ZXAnyAIDecoder)
#endif

#ifndef ZXAztecBinaryShiftToken
#define ZXAztecBinaryShiftToken __NS_SYMBOL(ZXAztecBinaryShiftToken)
#endif

#ifndef ZXAztecCode
#define ZXAztecCode __NS_SYMBOL(ZXAztecCode)
#endif

#ifndef ZXAztecDecoder
#define ZXAztecDecoder __NS_SYMBOL(ZXAztecDecoder)
#endif

#ifndef ZXAztecDetector
#define ZXAztecDetector __NS_SYMBOL(ZXAztecDetector)
#endif

#ifndef ZXAztecDetectorResult
#define ZXAztecDetectorResult __NS_SYMBOL(ZXAztecDetectorResult)
#endif

#ifndef ZXAztecEncoder
#define ZXAztecEncoder __NS_SYMBOL(ZXAztecEncoder)
#endif

#ifndef ZXAztecHighLevelEncoder
#define ZXAztecHighLevelEncoder __NS_SYMBOL(ZXAztecHighLevelEncoder)
#endif

#ifndef ZXAztecPoint
#define ZXAztecPoint __NS_SYMBOL(ZXAztecPoint)
#endif

#ifndef ZXAztecReader
#define ZXAztecReader __NS_SYMBOL(ZXAztecReader)
#endif

#ifndef ZXAztecSimpleToken
#define ZXAztecSimpleToken __NS_SYMBOL(ZXAztecSimpleToken)
#endif

#ifndef ZXAztecState
#define ZXAztecState __NS_SYMBOL(ZXAztecState)
#endif

#ifndef ZXAztecToken
#define ZXAztecToken __NS_SYMBOL(ZXAztecToken)
#endif

#ifndef ZXAztecWriter
#define ZXAztecWriter __NS_SYMBOL(ZXAztecWriter)
#endif

#ifndef ZXBinarizer
#define ZXBinarizer __NS_SYMBOL(ZXBinarizer)
#endif

#ifndef ZXBinaryBitmap
#define ZXBinaryBitmap __NS_SYMBOL(ZXBinaryBitmap)
#endif

#ifndef ZXBitArray
#define ZXBitArray __NS_SYMBOL(ZXBitArray)
#endif

#ifndef ZXBitArrayBuilder
#define ZXBitArrayBuilder __NS_SYMBOL(ZXBitArrayBuilder)
#endif

#ifndef ZXBitMatrix
#define ZXBitMatrix __NS_SYMBOL(ZXBitMatrix)
#endif

#ifndef ZXBitSource
#define ZXBitSource __NS_SYMBOL(ZXBitSource)
#endif

#ifndef ZXBizcardResultParser
#define ZXBizcardResultParser __NS_SYMBOL(ZXBizcardResultParser)
#endif

#ifndef ZXBookmarkDoCoMoResultParser
#define ZXBookmarkDoCoMoResultParser __NS_SYMBOL(ZXBookmarkDoCoMoResultParser)
#endif

#ifndef ZXBoolArray
#define ZXBoolArray __NS_SYMBOL(ZXBoolArray)
#endif

#ifndef ZXByQuadrantReader
#define ZXByQuadrantReader __NS_SYMBOL(ZXByQuadrantReader)
#endif

#ifndef ZXByteArray
#define ZXByteArray __NS_SYMBOL(ZXByteArray)
#endif

#ifndef ZXByteMatrix
#define ZXByteMatrix __NS_SYMBOL(ZXByteMatrix)
#endif

#ifndef ZXCGImageLuminanceSource
#define ZXCGImageLuminanceSource __NS_SYMBOL(ZXCGImageLuminanceSource)
#endif

#ifndef ZXCalendarParsedResult
#define ZXCalendarParsedResult __NS_SYMBOL(ZXCalendarParsedResult)
#endif

#ifndef ZXCapture
#define ZXCapture __NS_SYMBOL(ZXCapture)
#endif

#ifndef ZXCharacterSetECI
#define ZXCharacterSetECI __NS_SYMBOL(ZXCharacterSetECI)
#endif

#ifndef ZXCodaBarReader
#define ZXCodaBarReader __NS_SYMBOL(ZXCodaBarReader)
#endif

#ifndef ZXCodaBarWriter
#define ZXCodaBarWriter __NS_SYMBOL(ZXCodaBarWriter)
#endif

#ifndef ZXCode128Reader
#define ZXCode128Reader __NS_SYMBOL(ZXCode128Reader)
#endif

#ifndef ZXCode128Writer
#define ZXCode128Writer __NS_SYMBOL(ZXCode128Writer)
#endif

#ifndef ZXCode39Reader
#define ZXCode39Reader __NS_SYMBOL(ZXCode39Reader)
#endif

#ifndef ZXCode39Writer
#define ZXCode39Writer __NS_SYMBOL(ZXCode39Writer)
#endif

#ifndef ZXCode93Reader
#define ZXCode93Reader __NS_SYMBOL(ZXCode93Reader)
#endif

#ifndef ZXDataMask000
#define ZXDataMask000 __NS_SYMBOL(ZXDataMask000)
#endif

#ifndef ZXDataMask001
#define ZXDataMask001 __NS_SYMBOL(ZXDataMask001)
#endif

#ifndef ZXDataMask010
#define ZXDataMask010 __NS_SYMBOL(ZXDataMask010)
#endif

#ifndef ZXDataMask011
#define ZXDataMask011 __NS_SYMBOL(ZXDataMask011)
#endif

#ifndef ZXDataMask100
#define ZXDataMask100 __NS_SYMBOL(ZXDataMask100)
#endif

#ifndef ZXDataMask101
#define ZXDataMask101 __NS_SYMBOL(ZXDataMask101)
#endif

#ifndef ZXDataMask110
#define ZXDataMask110 __NS_SYMBOL(ZXDataMask110)
#endif

#ifndef ZXDataMask111
#define ZXDataMask111 __NS_SYMBOL(ZXDataMask111)
#endif

#ifndef ZXDataMatrixASCIIEncoder
#define ZXDataMatrixASCIIEncoder __NS_SYMBOL(ZXDataMatrixASCIIEncoder)
#endif

#ifndef ZXDataMatrixBase256Encoder
#define ZXDataMatrixBase256Encoder __NS_SYMBOL(ZXDataMatrixBase256Encoder)
#endif

#ifndef ZXDataMatrixBitMatrixParser
#define ZXDataMatrixBitMatrixParser __NS_SYMBOL(ZXDataMatrixBitMatrixParser)
#endif

#ifndef ZXDataMatrixC40Encoder
#define ZXDataMatrixC40Encoder __NS_SYMBOL(ZXDataMatrixC40Encoder)
#endif

#ifndef ZXDataMatrixDataBlock
#define ZXDataMatrixDataBlock __NS_SYMBOL(ZXDataMatrixDataBlock)
#endif

#ifndef ZXDataMatrixDecodedBitStreamParser
#define ZXDataMatrixDecodedBitStreamParser __NS_SYMBOL(ZXDataMatrixDecodedBitStreamParser)
#endif

#ifndef ZXDataMatrixDecoder
#define ZXDataMatrixDecoder __NS_SYMBOL(ZXDataMatrixDecoder)
#endif

#ifndef ZXDataMatrixDefaultPlacement
#define ZXDataMatrixDefaultPlacement __NS_SYMBOL(ZXDataMatrixDefaultPlacement)
#endif

#ifndef ZXDataMatrixDetector
#define ZXDataMatrixDetector __NS_SYMBOL(ZXDataMatrixDetector)
#endif

#ifndef ZXDataMatrixECB
#define ZXDataMatrixECB __NS_SYMBOL(ZXDataMatrixECB)
#endif

#ifndef ZXDataMatrixECBlocks
#define ZXDataMatrixECBlocks __NS_SYMBOL(ZXDataMatrixECBlocks)
#endif

#ifndef ZXDataMatrixEdifactEncoder
#define ZXDataMatrixEdifactEncoder __NS_SYMBOL(ZXDataMatrixEdifactEncoder)
#endif

#ifndef ZXDataMatrixEncoderContext
#define ZXDataMatrixEncoderContext __NS_SYMBOL(ZXDataMatrixEncoderContext)
#endif

#ifndef ZXDataMatrixErrorCorrection
#define ZXDataMatrixErrorCorrection __NS_SYMBOL(ZXDataMatrixErrorCorrection)
#endif

#ifndef ZXDataMatrixHighLevelEncoder
#define ZXDataMatrixHighLevelEncoder __NS_SYMBOL(ZXDataMatrixHighLevelEncoder)
#endif

#ifndef ZXDataMatrixReader
#define ZXDataMatrixReader __NS_SYMBOL(ZXDataMatrixReader)
#endif

#ifndef ZXDataMatrixSymbolInfo
#define ZXDataMatrixSymbolInfo __NS_SYMBOL(ZXDataMatrixSymbolInfo)
#endif

#ifndef ZXDataMatrixSymbolInfo144
#define ZXDataMatrixSymbolInfo144 __NS_SYMBOL(ZXDataMatrixSymbolInfo144)
#endif

#ifndef ZXDataMatrixTextEncoder
#define ZXDataMatrixTextEncoder __NS_SYMBOL(ZXDataMatrixTextEncoder)
#endif

#ifndef ZXDataMatrixVersion
#define ZXDataMatrixVersion __NS_SYMBOL(ZXDataMatrixVersion)
#endif

#ifndef ZXDataMatrixWriter
#define ZXDataMatrixWriter __NS_SYMBOL(ZXDataMatrixWriter)
#endif

#ifndef ZXDataMatrixX12Encoder
#define ZXDataMatrixX12Encoder __NS_SYMBOL(ZXDataMatrixX12Encoder)
#endif

#ifndef ZXDecodeHints
#define ZXDecodeHints __NS_SYMBOL(ZXDecodeHints)
#endif

#ifndef ZXDecoderResult
#define ZXDecoderResult __NS_SYMBOL(ZXDecoderResult)
#endif

#ifndef ZXDefaultGridSampler
#define ZXDefaultGridSampler __NS_SYMBOL(ZXDefaultGridSampler)
#endif

#ifndef ZXDetectorResult
#define ZXDetectorResult __NS_SYMBOL(ZXDetectorResult)
#endif

#ifndef ZXDimension
#define ZXDimension __NS_SYMBOL(ZXDimension)
#endif

#ifndef ZXEAN13Reader
#define ZXEAN13Reader __NS_SYMBOL(ZXEAN13Reader)
#endif

#ifndef ZXEAN13Writer
#define ZXEAN13Writer __NS_SYMBOL(ZXEAN13Writer)
#endif

#ifndef ZXEAN8Reader
#define ZXEAN8Reader __NS_SYMBOL(ZXEAN8Reader)
#endif

#ifndef ZXEAN8Writer
#define ZXEAN8Writer __NS_SYMBOL(ZXEAN8Writer)
#endif

#ifndef ZXEANManufacturerOrgSupport
#define ZXEANManufacturerOrgSupport __NS_SYMBOL(ZXEANManufacturerOrgSupport)
#endif

#ifndef ZXEmailAddressParsedResult
#define ZXEmailAddressParsedResult __NS_SYMBOL(ZXEmailAddressParsedResult)
#endif

#ifndef ZXEmailAddressResultParser
#define ZXEmailAddressResultParser __NS_SYMBOL(ZXEmailAddressResultParser)
#endif

#ifndef ZXEmailDoCoMoResultParser
#define ZXEmailDoCoMoResultParser __NS_SYMBOL(ZXEmailDoCoMoResultParser)
#endif

#ifndef ZXEncodeHints
#define ZXEncodeHints __NS_SYMBOL(ZXEncodeHints)
#endif

#ifndef ZXExpandedProductParsedResult
#define ZXExpandedProductParsedResult __NS_SYMBOL(ZXExpandedProductParsedResult)
#endif

#ifndef ZXExpandedProductResultParser
#define ZXExpandedProductResultParser __NS_SYMBOL(ZXExpandedProductResultParser)
#endif

#ifndef ZXGenericGF
#define ZXGenericGF __NS_SYMBOL(ZXGenericGF)
#endif

#ifndef ZXGenericGFPoly
#define ZXGenericGFPoly __NS_SYMBOL(ZXGenericGFPoly)
#endif

#ifndef ZXGenericMultipleBarcodeReader
#define ZXGenericMultipleBarcodeReader __NS_SYMBOL(ZXGenericMultipleBarcodeReader)
#endif

#ifndef ZXGeoParsedResult
#define ZXGeoParsedResult __NS_SYMBOL(ZXGeoParsedResult)
#endif

#ifndef ZXGeoResultParser
#define ZXGeoResultParser __NS_SYMBOL(ZXGeoResultParser)
#endif

#ifndef ZXGlobalHistogramBinarizer
#define ZXGlobalHistogramBinarizer __NS_SYMBOL(ZXGlobalHistogramBinarizer)
#endif

#ifndef ZXGridSampler
#define ZXGridSampler __NS_SYMBOL(ZXGridSampler)
#endif

#ifndef ZXHybridBinarizer
#define ZXHybridBinarizer __NS_SYMBOL(ZXHybridBinarizer)
#endif

#ifndef ZXISBNParsedResult
#define ZXISBNParsedResult __NS_SYMBOL(ZXISBNParsedResult)
#endif

#ifndef ZXISBNResultParser
#define ZXISBNResultParser __NS_SYMBOL(ZXISBNResultParser)
#endif

#ifndef ZXITFReader
#define ZXITFReader __NS_SYMBOL(ZXITFReader)
#endif

#ifndef ZXITFWriter
#define ZXITFWriter __NS_SYMBOL(ZXITFWriter)
#endif

#ifndef ZXImage
#define ZXImage __NS_SYMBOL(ZXImage)
#endif

#ifndef ZXIntArray
#define ZXIntArray __NS_SYMBOL(ZXIntArray)
#endif

#ifndef ZXInvertedLuminanceSource
#define ZXInvertedLuminanceSource __NS_SYMBOL(ZXInvertedLuminanceSource)
#endif

#ifndef ZXLuminanceSource
#define ZXLuminanceSource __NS_SYMBOL(ZXLuminanceSource)
#endif

#ifndef ZXMathUtils
#define ZXMathUtils __NS_SYMBOL(ZXMathUtils)
#endif

#ifndef ZXMaxiCodeBitMatrixParser
#define ZXMaxiCodeBitMatrixParser __NS_SYMBOL(ZXMaxiCodeBitMatrixParser)
#endif

#ifndef ZXMaxiCodeDecodedBitStreamParser
#define ZXMaxiCodeDecodedBitStreamParser __NS_SYMBOL(ZXMaxiCodeDecodedBitStreamParser)
#endif

#ifndef ZXMaxiCodeDecoder
#define ZXMaxiCodeDecoder __NS_SYMBOL(ZXMaxiCodeDecoder)
#endif

#ifndef ZXMaxiCodeReader
#define ZXMaxiCodeReader __NS_SYMBOL(ZXMaxiCodeReader)
#endif

#ifndef ZXModulusGF
#define ZXModulusGF __NS_SYMBOL(ZXModulusGF)
#endif

#ifndef ZXModulusPoly
#define ZXModulusPoly __NS_SYMBOL(ZXModulusPoly)
#endif

#ifndef ZXMonochromeRectangleDetector
#define ZXMonochromeRectangleDetector __NS_SYMBOL(ZXMonochromeRectangleDetector)
#endif

#ifndef ZXMultiDetector
#define ZXMultiDetector __NS_SYMBOL(ZXMultiDetector)
#endif

#ifndef ZXMultiFinderPatternFinder
#define ZXMultiFinderPatternFinder __NS_SYMBOL(ZXMultiFinderPatternFinder)
#endif

#ifndef ZXMultiFormatOneDReader
#define ZXMultiFormatOneDReader __NS_SYMBOL(ZXMultiFormatOneDReader)
#endif

#ifndef ZXMultiFormatReader
#define ZXMultiFormatReader __NS_SYMBOL(ZXMultiFormatReader)
#endif

#ifndef ZXMultiFormatUPCEANReader
#define ZXMultiFormatUPCEANReader __NS_SYMBOL(ZXMultiFormatUPCEANReader)
#endif

#ifndef ZXMultiFormatWriter
#define ZXMultiFormatWriter __NS_SYMBOL(ZXMultiFormatWriter)
#endif

#ifndef ZXOneDReader
#define ZXOneDReader __NS_SYMBOL(ZXOneDReader)
#endif

#ifndef ZXOneDimensionalCodeWriter
#define ZXOneDimensionalCodeWriter __NS_SYMBOL(ZXOneDimensionalCodeWriter)
#endif

#ifndef ZXPDF417
#define ZXPDF417 __NS_SYMBOL(ZXPDF417)
#endif

#ifndef ZXPDF417BarcodeMatrix
#define ZXPDF417BarcodeMatrix __NS_SYMBOL(ZXPDF417BarcodeMatrix)
#endif

#ifndef ZXPDF417BarcodeMetadata
#define ZXPDF417BarcodeMetadata __NS_SYMBOL(ZXPDF417BarcodeMetadata)
#endif

#ifndef ZXPDF417BarcodeRow
#define ZXPDF417BarcodeRow __NS_SYMBOL(ZXPDF417BarcodeRow)
#endif

#ifndef ZXPDF417BarcodeValue
#define ZXPDF417BarcodeValue __NS_SYMBOL(ZXPDF417BarcodeValue)
#endif

#ifndef ZXPDF417BoundingBox
#define ZXPDF417BoundingBox __NS_SYMBOL(ZXPDF417BoundingBox)
#endif

#ifndef ZXPDF417Codeword
#define ZXPDF417Codeword __NS_SYMBOL(ZXPDF417Codeword)
#endif

#ifndef ZXPDF417CodewordDecoder
#define ZXPDF417CodewordDecoder __NS_SYMBOL(ZXPDF417CodewordDecoder)
#endif

#ifndef ZXPDF417Common
#define ZXPDF417Common __NS_SYMBOL(ZXPDF417Common)
#endif

#ifndef ZXPDF417DecodedBitStreamParser
#define ZXPDF417DecodedBitStreamParser __NS_SYMBOL(ZXPDF417DecodedBitStreamParser)
#endif

#ifndef ZXPDF417DetectionResult
#define ZXPDF417DetectionResult __NS_SYMBOL(ZXPDF417DetectionResult)
#endif

#ifndef ZXPDF417DetectionResultColumn
#define ZXPDF417DetectionResultColumn __NS_SYMBOL(ZXPDF417DetectionResultColumn)
#endif

#ifndef ZXPDF417DetectionResultRowIndicatorColumn
#define ZXPDF417DetectionResultRowIndicatorColumn __NS_SYMBOL(ZXPDF417DetectionResultRowIndicatorColumn)
#endif

#ifndef ZXPDF417Detector
#define ZXPDF417Detector __NS_SYMBOL(ZXPDF417Detector)
#endif

#ifndef ZXPDF417DetectorResult
#define ZXPDF417DetectorResult __NS_SYMBOL(ZXPDF417DetectorResult)
#endif

#ifndef ZXPDF417Dimensions
#define ZXPDF417Dimensions __NS_SYMBOL(ZXPDF417Dimensions)
#endif

#ifndef ZXPDF417ECErrorCorrection
#define ZXPDF417ECErrorCorrection __NS_SYMBOL(ZXPDF417ECErrorCorrection)
#endif

#ifndef ZXPDF417ErrorCorrection
#define ZXPDF417ErrorCorrection __NS_SYMBOL(ZXPDF417ErrorCorrection)
#endif

#ifndef ZXPDF417HighLevelEncoder
#define ZXPDF417HighLevelEncoder __NS_SYMBOL(ZXPDF417HighLevelEncoder)
#endif

#ifndef ZXPDF417Reader
#define ZXPDF417Reader __NS_SYMBOL(ZXPDF417Reader)
#endif

#ifndef ZXPDF417ResultMetadata
#define ZXPDF417ResultMetadata __NS_SYMBOL(ZXPDF417ResultMetadata)
#endif

#ifndef ZXPDF417ScanningDecoder
#define ZXPDF417ScanningDecoder __NS_SYMBOL(ZXPDF417ScanningDecoder)
#endif

#ifndef ZXPDF417Writer
#define ZXPDF417Writer __NS_SYMBOL(ZXPDF417Writer)
#endif

#ifndef ZXParsedResult
#define ZXParsedResult __NS_SYMBOL(ZXParsedResult)
#endif

#ifndef ZXPerspectiveTransform
#define ZXPerspectiveTransform __NS_SYMBOL(ZXPerspectiveTransform)
#endif

#ifndef ZXPlanarYUVLuminanceSource
#define ZXPlanarYUVLuminanceSource __NS_SYMBOL(ZXPlanarYUVLuminanceSource)
#endif

#ifndef ZXProductParsedResult
#define ZXProductParsedResult __NS_SYMBOL(ZXProductParsedResult)
#endif

#ifndef ZXProductResultParser
#define ZXProductResultParser __NS_SYMBOL(ZXProductResultParser)
#endif

#ifndef ZXQRCode
#define ZXQRCode __NS_SYMBOL(ZXQRCode)
#endif

#ifndef ZXQRCodeAlignmentPattern
#define ZXQRCodeAlignmentPattern __NS_SYMBOL(ZXQRCodeAlignmentPattern)
#endif

#ifndef ZXQRCodeAlignmentPatternFinder
#define ZXQRCodeAlignmentPatternFinder __NS_SYMBOL(ZXQRCodeAlignmentPatternFinder)
#endif

#ifndef ZXQRCodeBitMatrixParser
#define ZXQRCodeBitMatrixParser __NS_SYMBOL(ZXQRCodeBitMatrixParser)
#endif

#ifndef ZXQRCodeBlockPair
#define ZXQRCodeBlockPair __NS_SYMBOL(ZXQRCodeBlockPair)
#endif

#ifndef ZXQRCodeDataBlock
#define ZXQRCodeDataBlock __NS_SYMBOL(ZXQRCodeDataBlock)
#endif

#ifndef ZXQRCodeDataMask
#define ZXQRCodeDataMask __NS_SYMBOL(ZXQRCodeDataMask)
#endif

#ifndef ZXQRCodeDecodedBitStreamParser
#define ZXQRCodeDecodedBitStreamParser __NS_SYMBOL(ZXQRCodeDecodedBitStreamParser)
#endif

#ifndef ZXQRCodeDecoder
#define ZXQRCodeDecoder __NS_SYMBOL(ZXQRCodeDecoder)
#endif

#ifndef ZXQRCodeDecoderMetaData
#define ZXQRCodeDecoderMetaData __NS_SYMBOL(ZXQRCodeDecoderMetaData)
#endif

#ifndef ZXQRCodeDetector
#define ZXQRCodeDetector __NS_SYMBOL(ZXQRCodeDetector)
#endif

#ifndef ZXQRCodeECB
#define ZXQRCodeECB __NS_SYMBOL(ZXQRCodeECB)
#endif

#ifndef ZXQRCodeECBlocks
#define ZXQRCodeECBlocks __NS_SYMBOL(ZXQRCodeECBlocks)
#endif

#ifndef ZXQRCodeEncoder
#define ZXQRCodeEncoder __NS_SYMBOL(ZXQRCodeEncoder)
#endif

#ifndef ZXQRCodeErrorCorrectionLevel
#define ZXQRCodeErrorCorrectionLevel __NS_SYMBOL(ZXQRCodeErrorCorrectionLevel)
#endif

#ifndef ZXQRCodeFinderPattern
#define ZXQRCodeFinderPattern __NS_SYMBOL(ZXQRCodeFinderPattern)
#endif

#ifndef ZXQRCodeFinderPatternFinder
#define ZXQRCodeFinderPatternFinder __NS_SYMBOL(ZXQRCodeFinderPatternFinder)
#endif

#ifndef ZXQRCodeFinderPatternInfo
#define ZXQRCodeFinderPatternInfo __NS_SYMBOL(ZXQRCodeFinderPatternInfo)
#endif

#ifndef ZXQRCodeFormatInformation
#define ZXQRCodeFormatInformation __NS_SYMBOL(ZXQRCodeFormatInformation)
#endif

#ifndef ZXQRCodeMaskUtil
#define ZXQRCodeMaskUtil __NS_SYMBOL(ZXQRCodeMaskUtil)
#endif

#ifndef ZXQRCodeMatrixUtil
#define ZXQRCodeMatrixUtil __NS_SYMBOL(ZXQRCodeMatrixUtil)
#endif

#ifndef ZXQRCodeMode
#define ZXQRCodeMode __NS_SYMBOL(ZXQRCodeMode)
#endif

#ifndef ZXQRCodeMultiReader
#define ZXQRCodeMultiReader __NS_SYMBOL(ZXQRCodeMultiReader)
#endif

#ifndef ZXQRCodeReader
#define ZXQRCodeReader __NS_SYMBOL(ZXQRCodeReader)
#endif

#ifndef ZXQRCodeVersion
#define ZXQRCodeVersion __NS_SYMBOL(ZXQRCodeVersion)
#endif

#ifndef ZXQRCodeWriter
#define ZXQRCodeWriter __NS_SYMBOL(ZXQRCodeWriter)
#endif

#ifndef ZXRGBLuminanceSource
#define ZXRGBLuminanceSource __NS_SYMBOL(ZXRGBLuminanceSource)
#endif

#ifndef ZXRSS14Reader
#define ZXRSS14Reader __NS_SYMBOL(ZXRSS14Reader)
#endif

#ifndef ZXRSSDataCharacter
#define ZXRSSDataCharacter __NS_SYMBOL(ZXRSSDataCharacter)
#endif

#ifndef ZXRSSExpandedBlockParsedResult
#define ZXRSSExpandedBlockParsedResult __NS_SYMBOL(ZXRSSExpandedBlockParsedResult)
#endif

#ifndef ZXRSSExpandedCurrentParsingState
#define ZXRSSExpandedCurrentParsingState __NS_SYMBOL(ZXRSSExpandedCurrentParsingState)
#endif

#ifndef ZXRSSExpandedDecodedChar
#define ZXRSSExpandedDecodedChar __NS_SYMBOL(ZXRSSExpandedDecodedChar)
#endif

#ifndef ZXRSSExpandedDecodedInformation
#define ZXRSSExpandedDecodedInformation __NS_SYMBOL(ZXRSSExpandedDecodedInformation)
#endif

#ifndef ZXRSSExpandedDecodedNumeric
#define ZXRSSExpandedDecodedNumeric __NS_SYMBOL(ZXRSSExpandedDecodedNumeric)
#endif

#ifndef ZXRSSExpandedDecodedObject
#define ZXRSSExpandedDecodedObject __NS_SYMBOL(ZXRSSExpandedDecodedObject)
#endif

#ifndef ZXRSSExpandedFieldParser
#define ZXRSSExpandedFieldParser __NS_SYMBOL(ZXRSSExpandedFieldParser)
#endif

#ifndef ZXRSSExpandedGeneralAppIdDecoder
#define ZXRSSExpandedGeneralAppIdDecoder __NS_SYMBOL(ZXRSSExpandedGeneralAppIdDecoder)
#endif

#ifndef ZXRSSExpandedPair
#define ZXRSSExpandedPair __NS_SYMBOL(ZXRSSExpandedPair)
#endif

#ifndef ZXRSSExpandedReader
#define ZXRSSExpandedReader __NS_SYMBOL(ZXRSSExpandedReader)
#endif

#ifndef ZXRSSExpandedRow
#define ZXRSSExpandedRow __NS_SYMBOL(ZXRSSExpandedRow)
#endif

#ifndef ZXRSSFinderPattern
#define ZXRSSFinderPattern __NS_SYMBOL(ZXRSSFinderPattern)
#endif

#ifndef ZXRSSPair
#define ZXRSSPair __NS_SYMBOL(ZXRSSPair)
#endif

#ifndef ZXRSSUtils
#define ZXRSSUtils __NS_SYMBOL(ZXRSSUtils)
#endif

#ifndef ZXReedSolomonDecoder
#define ZXReedSolomonDecoder __NS_SYMBOL(ZXReedSolomonDecoder)
#endif

#ifndef ZXReedSolomonEncoder
#define ZXReedSolomonEncoder __NS_SYMBOL(ZXReedSolomonEncoder)
#endif

#ifndef ZXResult
#define ZXResult __NS_SYMBOL(ZXResult)
#endif

#ifndef ZXResultParser
#define ZXResultParser __NS_SYMBOL(ZXResultParser)
#endif

#ifndef ZXResultPoint
#define ZXResultPoint __NS_SYMBOL(ZXResultPoint)
#endif

#ifndef ZXResultPointsAndTransitions
#define ZXResultPointsAndTransitions __NS_SYMBOL(ZXResultPointsAndTransitions)
#endif

#ifndef ZXSMSMMSResultParser
#define ZXSMSMMSResultParser __NS_SYMBOL(ZXSMSMMSResultParser)
#endif

#ifndef ZXSMSParsedResult
#define ZXSMSParsedResult __NS_SYMBOL(ZXSMSParsedResult)
#endif

#ifndef ZXSMSTOMMSTOResultParser
#define ZXSMSTOMMSTOResultParser __NS_SYMBOL(ZXSMSTOMMSTOResultParser)
#endif

#ifndef ZXSMTPResultParser
#define ZXSMTPResultParser __NS_SYMBOL(ZXSMTPResultParser)
#endif

#ifndef ZXStringUtils
#define ZXStringUtils __NS_SYMBOL(ZXStringUtils)
#endif

#ifndef ZXTelParsedResult
#define ZXTelParsedResult __NS_SYMBOL(ZXTelParsedResult)
#endif

#ifndef ZXTelResultParser
#define ZXTelResultParser __NS_SYMBOL(ZXTelResultParser)
#endif

#ifndef ZXTextParsedResult
#define ZXTextParsedResult __NS_SYMBOL(ZXTextParsedResult)
#endif

#ifndef ZXUPCAReader
#define ZXUPCAReader __NS_SYMBOL(ZXUPCAReader)
#endif

#ifndef ZXUPCAWriter
#define ZXUPCAWriter __NS_SYMBOL(ZXUPCAWriter)
#endif

#ifndef ZXUPCEANExtension2Support
#define ZXUPCEANExtension2Support __NS_SYMBOL(ZXUPCEANExtension2Support)
#endif

#ifndef ZXUPCEANExtension5Support
#define ZXUPCEANExtension5Support __NS_SYMBOL(ZXUPCEANExtension5Support)
#endif

#ifndef ZXUPCEANExtensionSupport
#define ZXUPCEANExtensionSupport __NS_SYMBOL(ZXUPCEANExtensionSupport)
#endif

#ifndef ZXUPCEANReader
#define ZXUPCEANReader __NS_SYMBOL(ZXUPCEANReader)
#endif

#ifndef ZXUPCEANWriter
#define ZXUPCEANWriter __NS_SYMBOL(ZXUPCEANWriter)
#endif

#ifndef ZXUPCEReader
#define ZXUPCEReader __NS_SYMBOL(ZXUPCEReader)
#endif

#ifndef ZXURIParsedResult
#define ZXURIParsedResult __NS_SYMBOL(ZXURIParsedResult)
#endif

#ifndef ZXURIResultParser
#define ZXURIResultParser __NS_SYMBOL(ZXURIResultParser)
#endif

#ifndef ZXURLTOResultParser
#define ZXURLTOResultParser __NS_SYMBOL(ZXURLTOResultParser)
#endif

#ifndef ZXVCardResultParser
#define ZXVCardResultParser __NS_SYMBOL(ZXVCardResultParser)
#endif

#ifndef ZXVEventResultParser
#define ZXVEventResultParser __NS_SYMBOL(ZXVEventResultParser)
#endif

#ifndef ZXVINParsedResult
#define ZXVINParsedResult __NS_SYMBOL(ZXVINParsedResult)
#endif

#ifndef ZXVINResultParser
#define ZXVINResultParser __NS_SYMBOL(ZXVINResultParser)
#endif

#ifndef ZXWhiteRectangleDetector
#define ZXWhiteRectangleDetector __NS_SYMBOL(ZXWhiteRectangleDetector)
#endif

#ifndef ZXWifiParsedResult
#define ZXWifiParsedResult __NS_SYMBOL(ZXWifiParsedResult)
#endif

#ifndef ZXWifiResultParser
#define ZXWifiResultParser __NS_SYMBOL(ZXWifiResultParser)
#endif

// Functions
#ifndef AFStringFromNetworkReachabilityStatus
#define AFStringFromNetworkReachabilityStatus __NS_SYMBOL(AFStringFromNetworkReachabilityStatus)
#endif

#ifndef CRContentWidthForAccessoryViewsWithAlignments
#define CRContentWidthForAccessoryViewsWithAlignments __NS_SYMBOL(CRContentWidthForAccessoryViewsWithAlignments)
#endif

#ifndef ImageDataHasPNGPreffix
#define ImageDataHasPNGPreffix __NS_SYMBOL(ImageDataHasPNGPreffix)
#endif

#ifndef NSStringFromCRToastInteractionType
#define NSStringFromCRToastInteractionType __NS_SYMBOL(NSStringFromCRToastInteractionType)
#endif

#ifndef NSStringFromService
#define NSStringFromService __NS_SYMBOL(NSStringFromService)
#endif

#ifndef NSUserDefaultsUniqueKey
#define NSUserDefaultsUniqueKey __NS_SYMBOL(NSUserDefaultsUniqueKey)
#endif

#ifndef SDScaledImageForKey
#define SDScaledImageForKey __NS_SYMBOL(SDScaledImageForKey)
#endif

#ifndef ZXChecksumErrorInstance
#define ZXChecksumErrorInstance __NS_SYMBOL(ZXChecksumErrorInstance)
#endif

#ifndef baseURLForService
#define baseURLForService __NS_SYMBOL(baseURLForService)
#endif

#ifndef ZXFormatErrorInstance
#define ZXFormatErrorInstance __NS_SYMBOL(ZXFormatErrorInstance)
#endif

#ifndef DZNPhotoServiceFromName
#define DZNPhotoServiceFromName __NS_SYMBOL(DZNPhotoServiceFromName)
#endif

#ifndef ZXNotFoundErrorInstance
#define ZXNotFoundErrorInstance __NS_SYMBOL(ZXNotFoundErrorInstance)
#endif

#ifndef tagsResourceKeyPathForService
#define tagsResourceKeyPathForService __NS_SYMBOL(tagsResourceKeyPathForService)
#endif

#ifndef tagSearchUrlPathForService
#define tagSearchUrlPathForService __NS_SYMBOL(tagSearchUrlPathForService)
#endif

#ifndef photosResourceKeyPathForService
#define photosResourceKeyPathForService __NS_SYMBOL(photosResourceKeyPathForService)
#endif

#ifndef DZNFirstPhotoServiceFromPhotoServices
#define DZNFirstPhotoServiceFromPhotoServices __NS_SYMBOL(DZNFirstPhotoServiceFromPhotoServices)
#endif

#ifndef CRToastInteractionResponderIsGenertic
#define CRToastInteractionResponderIsGenertic __NS_SYMBOL(CRToastInteractionResponderIsGenertic)
#endif

#ifndef CRToastInteractionResponderIsSwipe
#define CRToastInteractionResponderIsSwipe __NS_SYMBOL(CRToastInteractionResponderIsSwipe)
#endif

#ifndef NSArrayFromServices
#define NSArrayFromServices __NS_SYMBOL(NSArrayFromServices)
#endif

#ifndef CRToastInteractionResponderIsTap
#define CRToastInteractionResponderIsTap __NS_SYMBOL(CRToastInteractionResponderIsTap)
#endif

#ifndef photoSearchUrlPathForService
#define photoSearchUrlPathForService __NS_SYMBOL(photoSearchUrlPathForService)
#endif

#ifndef CRToastSwipeGestureRecognizerMake
#define CRToastSwipeGestureRecognizerMake __NS_SYMBOL(CRToastSwipeGestureRecognizerMake)
#endif

#ifndef AFQueryStringPairsFromDictionary
#define AFQueryStringPairsFromDictionary __NS_SYMBOL(AFQueryStringPairsFromDictionary)
#endif

#ifndef authUrlPathForService
#define authUrlPathForService __NS_SYMBOL(authUrlPathForService)
#endif

#ifndef AFQueryStringPairsFromKeyAndValue
#define AFQueryStringPairsFromKeyAndValue __NS_SYMBOL(AFQueryStringPairsFromKeyAndValue)
#endif

#ifndef keyForAPIConsumerKey
#define keyForAPIConsumerKey __NS_SYMBOL(keyForAPIConsumerKey)
#endif

#ifndef CRToastTapGestureRecognizerMake
#define CRToastTapGestureRecognizerMake __NS_SYMBOL(CRToastTapGestureRecognizerMake)
#endif

#ifndef keyForAPIConsumerSecret
#define keyForAPIConsumerSecret __NS_SYMBOL(keyForAPIConsumerSecret)
#endif

#ifndef keyForSearchTerm
#define keyForSearchTerm __NS_SYMBOL(keyForSearchTerm)
#endif

#ifndef CRToastGestureRecognizerMake
#define CRToastGestureRecognizerMake __NS_SYMBOL(CRToastGestureRecognizerMake)
#endif

#ifndef CRToastInwardAnimationsBlock
#define CRToastInwardAnimationsBlock __NS_SYMBOL(CRToastInwardAnimationsBlock)
#endif

#ifndef keyForSearchTag
#define keyForSearchTag __NS_SYMBOL(keyForSearchTag)
#endif

#ifndef keyForSearchResultPerPage
#define keyForSearchResultPerPage __NS_SYMBOL(keyForSearchResultPerPage)
#endif

#ifndef CRToastGenericSwipeRecognizersMake
#define CRToastGenericSwipeRecognizersMake __NS_SYMBOL(CRToastGenericSwipeRecognizersMake)
#endif

#ifndef keyForSearchTagContent
#define keyForSearchTagContent __NS_SYMBOL(keyForSearchTagContent)
#endif

#ifndef keyPathForObjectName
#define keyPathForObjectName __NS_SYMBOL(keyPathForObjectName)
#endif

#ifndef isConsumerSecretRequiredForService
#define isConsumerSecretRequiredForService __NS_SYMBOL(isConsumerSecretRequiredForService)
#endif

#ifndef isConsumerKeyInParametersRequiredForService
#define isConsumerKeyInParametersRequiredForService __NS_SYMBOL(isConsumerKeyInParametersRequiredForService)
#endif

#ifndef isAuthenticationRequiredForService
#define isAuthenticationRequiredForService __NS_SYMBOL(isAuthenticationRequiredForService)
#endif

#ifndef CRToastInwardAnimationsCompletionBlock
#define CRToastInwardAnimationsCompletionBlock __NS_SYMBOL(CRToastInwardAnimationsCompletionBlock)
#endif

#ifndef moduleSizeCompare
#define moduleSizeCompare __NS_SYMBOL(moduleSizeCompare)
#endif

#ifndef CRToastGenericTapRecognizersMake
#define CRToastGenericTapRecognizersMake __NS_SYMBOL(CRToastGenericTapRecognizersMake)
#endif

#ifndef CRToastOutwardAnimationsSetupBlock
#define CRToastOutwardAnimationsSetupBlock __NS_SYMBOL(CRToastOutwardAnimationsSetupBlock)
#endif

#ifndef CRToastGenericRecognizersMake
#define CRToastGenericRecognizersMake __NS_SYMBOL(CRToastGenericRecognizersMake)
#endif

#ifndef CRToastOutwardAnimationsCompletionBlock
#define CRToastOutwardAnimationsCompletionBlock __NS_SYMBOL(CRToastOutwardAnimationsCompletionBlock)
#endif

#ifndef CRToastOutwardAnimationsBlock
#define CRToastOutwardAnimationsBlock __NS_SYMBOL(CRToastOutwardAnimationsBlock)
#endif

#ifndef centerCompare
#define centerCompare __NS_SYMBOL(centerCompare)
#endif

#ifndef furthestFromAverageCompare
#define furthestFromAverageCompare __NS_SYMBOL(furthestFromAverageCompare)
#endif

#ifndef CGSizeAspectFit
#define CGSizeAspectFit __NS_SYMBOL(CGSizeAspectFit)
#endif

#ifndef photoAspectFromSize
#define photoAspectFromSize __NS_SYMBOL(photoAspectFromSize)
#endif

#ifndef dzn_original_implementation
#define dzn_original_implementation __NS_SYMBOL(dzn_original_implementation)
#endif

#ifndef _implementationKey
#define _implementationKey __NS_SYMBOL(_implementationKey)
#endif

#ifndef CRToastAnimationDirectionIsVertical
#define CRToastAnimationDirectionIsVertical __NS_SYMBOL(CRToastAnimationDirectionIsVertical)
#endif

#ifndef CRToastAnimationDirectionIsHorizontal
#define CRToastAnimationDirectionIsHorizontal __NS_SYMBOL(CRToastAnimationDirectionIsHorizontal)
#endif

// Externs
#ifndef OBJC_PROTOCOL_$_XLFormOptionObject
#define OBJC_PROTOCOL_$_XLFormOptionObject __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormOptionObject)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormValidatorProtocol
#define OBJC_PROTOCOL_$_XLFormValidatorProtocol __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormValidatorProtocol)
#endif

#ifndef OBJC_PROTOCOL_$_SDWebImageOperation
#define OBJC_PROTOCOL_$_SDWebImageOperation __NS_SYMBOL(OBJC_PROTOCOL_$_SDWebImageOperation)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormOptionObject
#define OBJC_PROTOCOL_$_XLFormOptionObject __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormOptionObject)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef kReachabilityChangedNotification
#define kReachabilityChangedNotification __NS_SYMBOL(kReachabilityChangedNotification)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_ZXDataMatrixEncoder
#define OBJC_PROTOCOL_$_ZXDataMatrixEncoder __NS_SYMBOL(OBJC_PROTOCOL_$_ZXDataMatrixEncoder)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_ZXDataMatrixEncoder
#define OBJC_PROTOCOL_$_ZXDataMatrixEncoder __NS_SYMBOL(OBJC_PROTOCOL_$_ZXDataMatrixEncoder)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef ZX_CODE39_ALPHABET
#define ZX_CODE39_ALPHABET __NS_SYMBOL(ZX_CODE39_ALPHABET)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell
#define OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_ZXDataMatrixEncoder
#define OBJC_PROTOCOL_$_ZXDataMatrixEncoder __NS_SYMBOL(OBJC_PROTOCOL_$_ZXDataMatrixEncoder)
#endif

#ifndef OBJC_PROTOCOL_$_ZXWriter
#define OBJC_PROTOCOL_$_ZXWriter __NS_SYMBOL(OBJC_PROTOCOL_$_ZXWriter)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_ZXDataMatrixEncoder
#define OBJC_PROTOCOL_$_ZXDataMatrixEncoder __NS_SYMBOL(OBJC_PROTOCOL_$_ZXDataMatrixEncoder)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXMultipleBarcodeReader
#define OBJC_PROTOCOL_$_ZXMultipleBarcodeReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXMultipleBarcodeReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell
#define OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_ZXReader
#define OBJC_PROTOCOL_$_ZXReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXReader)
#endif

#ifndef OBJC_PROTOCOL_$_ZXMultipleBarcodeReader
#define OBJC_PROTOCOL_$_ZXMultipleBarcodeReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXMultipleBarcodeReader)
#endif

#ifndef OBJC_PROTOCOL_$_AFImageCache
#define OBJC_PROTOCOL_$_AFImageCache __NS_SYMBOL(OBJC_PROTOCOL_$_AFImageCache)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell
#define OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_ZXMultipleBarcodeReader
#define OBJC_PROTOCOL_$_ZXMultipleBarcodeReader __NS_SYMBOL(OBJC_PROTOCOL_$_ZXMultipleBarcodeReader)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell
#define OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell)
#endif

#ifndef expectedCornerBits
#define expectedCornerBits __NS_SYMBOL(expectedCornerBits)
#endif

#ifndef OBJC_PROTOCOL_$_SDWebImageOperation
#define OBJC_PROTOCOL_$_SDWebImageOperation __NS_SYMBOL(OBJC_PROTOCOL_$_SDWebImageOperation)
#endif

#ifndef OBJC_PROTOCOL_$_DZNPhotoServiceClientProtocol
#define OBJC_PROTOCOL_$_DZNPhotoServiceClientProtocol __NS_SYMBOL(OBJC_PROTOCOL_$_DZNPhotoServiceClientProtocol)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorViewController)
#endif

#ifndef OBJC_PROTOCOL_$_AVCaptureVideoDataOutputSampleBufferDelegate
#define OBJC_PROTOCOL_$_AVCaptureVideoDataOutputSampleBufferDelegate __NS_SYMBOL(OBJC_PROTOCOL_$_AVCaptureVideoDataOutputSampleBufferDelegate)
#endif

#ifndef OBJC_PROTOCOL_$_CAAction
#define OBJC_PROTOCOL_$_CAAction __NS_SYMBOL(OBJC_PROTOCOL_$_CAAction)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLResponseSerialization
#define OBJC_PROTOCOL_$_AFURLResponseSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLResponseSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_DZNEmptyDataSetSource
#define OBJC_PROTOCOL_$_DZNEmptyDataSetSource __NS_SYMBOL(OBJC_PROTOCOL_$_DZNEmptyDataSetSource)
#endif

#ifndef OBJC_PROTOCOL_$_SDWebImageOperation
#define OBJC_PROTOCOL_$_SDWebImageOperation __NS_SYMBOL(OBJC_PROTOCOL_$_SDWebImageOperation)
#endif

#ifndef OBJC_PROTOCOL_$_DZNEmptyDataSetSource
#define OBJC_PROTOCOL_$_DZNEmptyDataSetSource __NS_SYMBOL(OBJC_PROTOCOL_$_DZNEmptyDataSetSource)
#endif

#ifndef OBJC_PROTOCOL_$_DZNEmptyDataSetDelegate
#define OBJC_PROTOCOL_$_DZNEmptyDataSetDelegate __NS_SYMBOL(OBJC_PROTOCOL_$_DZNEmptyDataSetDelegate)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorPopoverViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormValidatorProtocol
#define OBJC_PROTOCOL_$_XLFormValidatorProtocol __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormValidatorProtocol)
#endif

#ifndef OBJC_PROTOCOL_$_HSDatePickerViewControllerDelegate
#define OBJC_PROTOCOL_$_HSDatePickerViewControllerDelegate __NS_SYMBOL(OBJC_PROTOCOL_$_HSDatePickerViewControllerDelegate)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorCell
#define OBJC_PROTOCOL_$_XLFormDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell
#define OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormInlineRowDescriptorCell)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormRowDescriptorViewController
#define OBJC_PROTOCOL_$_XLFormRowDescriptorViewController __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormRowDescriptorViewController)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormDescriptorDelegate
#define OBJC_PROTOCOL_$_XLFormDescriptorDelegate __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormDescriptorDelegate)
#endif

#ifndef OBJC_PROTOCOL_$_XLFormViewControllerDelegate
#define OBJC_PROTOCOL_$_XLFormViewControllerDelegate __NS_SYMBOL(OBJC_PROTOCOL_$_XLFormViewControllerDelegate)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLRequestSerialization
#define OBJC_PROTOCOL_$_AFURLRequestSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLRequestSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_AFMultipartFormData
#define OBJC_PROTOCOL_$_AFMultipartFormData __NS_SYMBOL(OBJC_PROTOCOL_$_AFMultipartFormData)
#endif

#ifndef ZX_ANY_AI_HEADER_SIZE
#define ZX_ANY_AI_HEADER_SIZE __NS_SYMBOL(ZX_ANY_AI_HEADER_SIZE)
#endif

#ifndef ZX_FNC1_CHAR
#define ZX_FNC1_CHAR __NS_SYMBOL(ZX_FNC1_CHAR)
#endif

#ifndef ZX_AI013x0x_HEADER_SIZE
#define ZX_AI013x0x_HEADER_SIZE __NS_SYMBOL(ZX_AI013x0x_HEADER_SIZE)
#endif

#ifndef ZX_AI013x0x_WEIGHT_SIZE
#define ZX_AI013x0x_WEIGHT_SIZE __NS_SYMBOL(ZX_AI013x0x_WEIGHT_SIZE)
#endif

#ifndef ZX_AI01_HEADER_SIZE
#define ZX_AI01_HEADER_SIZE __NS_SYMBOL(ZX_AI01_HEADER_SIZE)
#endif

#ifndef ZX_AI01392x_HEADER_SIZE
#define ZX_AI01392x_HEADER_SIZE __NS_SYMBOL(ZX_AI01392x_HEADER_SIZE)
#endif

#ifndef ZX_AI01392x_LAST_DIGIT_SIZE
#define ZX_AI01392x_LAST_DIGIT_SIZE __NS_SYMBOL(ZX_AI01392x_LAST_DIGIT_SIZE)
#endif

#ifndef ZX_FNC1_INT
#define ZX_FNC1_INT __NS_SYMBOL(ZX_FNC1_INT)
#endif

#ifndef ZX_AI01_GTIN_SIZE
#define ZX_AI01_GTIN_SIZE __NS_SYMBOL(ZX_AI01_GTIN_SIZE)
#endif

#ifndef ZX_AI01393xDecoder_HEADER_SIZE
#define ZX_AI01393xDecoder_HEADER_SIZE __NS_SYMBOL(ZX_AI01393xDecoder_HEADER_SIZE)
#endif

#ifndef ZX_AI01393xDecoder_LAST_DIGIT_SIZE
#define ZX_AI01393xDecoder_LAST_DIGIT_SIZE __NS_SYMBOL(ZX_AI01393xDecoder_LAST_DIGIT_SIZE)
#endif

#ifndef ZX_AI01393xDecoder_FIRST_THREE_DIGITS_SIZE
#define ZX_AI01393xDecoder_FIRST_THREE_DIGITS_SIZE __NS_SYMBOL(ZX_AI01393xDecoder_FIRST_THREE_DIGITS_SIZE)
#endif

#ifndef ZX_BITNR
#define ZX_BITNR __NS_SYMBOL(ZX_BITNR)
#endif

#ifndef ZX_PDF417_BARCODE_ROW_UNKNOWN
#define ZX_PDF417_BARCODE_ROW_UNKNOWN __NS_SYMBOL(ZX_PDF417_BARCODE_ROW_UNKNOWN)
#endif

#ifndef ZX_UPCEAN_EXTENSION_START_PATTERN
#define ZX_UPCEAN_EXTENSION_START_PATTERN __NS_SYMBOL(ZX_UPCEAN_EXTENSION_START_PATTERN)
#endif

#ifndef ZX_PDF417_EC_COEFFICIENTS
#define ZX_PDF417_EC_COEFFICIENTS __NS_SYMBOL(ZX_PDF417_EC_COEFFICIENTS)
#endif

#ifndef ZX_EAN8_CODE_WIDTH
#define ZX_EAN8_CODE_WIDTH __NS_SYMBOL(ZX_EAN8_CODE_WIDTH)
#endif

#ifndef ZX_FORMAT_INFO_MASK_QR
#define ZX_FORMAT_INFO_MASK_QR __NS_SYMBOL(ZX_FORMAT_INFO_MASK_QR)
#endif

#ifndef ZX_FORMAT_INFO_DECODE_LOOKUP_LEN
#define ZX_FORMAT_INFO_DECODE_LOOKUP_LEN __NS_SYMBOL(ZX_FORMAT_INFO_DECODE_LOOKUP_LEN)
#endif

#ifndef ZX_NUM_MASK_PATTERNS
#define ZX_NUM_MASK_PATTERNS __NS_SYMBOL(ZX_NUM_MASK_PATTERNS)
#endif

#ifndef ZX_FORMAT_INFO_DECODE_LOOKUP
#define ZX_FORMAT_INFO_DECODE_LOOKUP __NS_SYMBOL(ZX_FORMAT_INFO_DECODE_LOOKUP)
#endif

#ifndef XLFormRowDescriptorTypeText
#define XLFormRowDescriptorTypeText __NS_SYMBOL(XLFormRowDescriptorTypeText)
#endif

#ifndef ZX_PDF417_NUMBER_OF_CODEWORDS
#define ZX_PDF417_NUMBER_OF_CODEWORDS __NS_SYMBOL(ZX_PDF417_NUMBER_OF_CODEWORDS)
#endif

#ifndef ZX_PDF417_MAX_CODEWORDS_IN_BARCODE
#define ZX_PDF417_MAX_CODEWORDS_IN_BARCODE __NS_SYMBOL(ZX_PDF417_MAX_CODEWORDS_IN_BARCODE)
#endif

#ifndef XLFormRowDescriptorTypeName
#define XLFormRowDescriptorTypeName __NS_SYMBOL(XLFormRowDescriptorTypeName)
#endif

#ifndef ZX_PDF417_MIN_ROWS_IN_BARCODE
#define ZX_PDF417_MIN_ROWS_IN_BARCODE __NS_SYMBOL(ZX_PDF417_MIN_ROWS_IN_BARCODE)
#endif

#ifndef ZX_PDF417_MAX_ROWS_IN_BARCODE
#define ZX_PDF417_MAX_ROWS_IN_BARCODE __NS_SYMBOL(ZX_PDF417_MAX_ROWS_IN_BARCODE)
#endif

#ifndef XLFormRowDescriptorTypeURL
#define XLFormRowDescriptorTypeURL __NS_SYMBOL(XLFormRowDescriptorTypeURL)
#endif

#ifndef ZX_ITF_WRITER_START_PATTERN
#define ZX_ITF_WRITER_START_PATTERN __NS_SYMBOL(ZX_ITF_WRITER_START_PATTERN)
#endif

#ifndef ZX_PDF417_MODULES_IN_CODEWORD
#define ZX_PDF417_MODULES_IN_CODEWORD __NS_SYMBOL(ZX_PDF417_MODULES_IN_CODEWORD)
#endif

#ifndef ZX_PDF417_MODULES_IN_STOP_PATTERN
#define ZX_PDF417_MODULES_IN_STOP_PATTERN __NS_SYMBOL(ZX_PDF417_MODULES_IN_STOP_PATTERN)
#endif

#ifndef XLFormRowDescriptorTypeEmail
#define XLFormRowDescriptorTypeEmail __NS_SYMBOL(XLFormRowDescriptorTypeEmail)
#endif

#ifndef XLFormRowDescriptorTypePassword
#define XLFormRowDescriptorTypePassword __NS_SYMBOL(XLFormRowDescriptorTypePassword)
#endif

#ifndef ZX_ITF_WRITER_END_PATTERN
#define ZX_ITF_WRITER_END_PATTERN __NS_SYMBOL(ZX_ITF_WRITER_END_PATTERN)
#endif

#ifndef ZX_PDF417_SYMBOL_TABLE
#define ZX_PDF417_SYMBOL_TABLE __NS_SYMBOL(ZX_PDF417_SYMBOL_TABLE)
#endif

#ifndef XLFormRowDescriptorTypeNumber
#define XLFormRowDescriptorTypeNumber __NS_SYMBOL(XLFormRowDescriptorTypeNumber)
#endif

#ifndef XLFormRowDescriptorTypePhone
#define XLFormRowDescriptorTypePhone __NS_SYMBOL(XLFormRowDescriptorTypePhone)
#endif

#ifndef XLFormRowDescriptorTypeTwitter
#define XLFormRowDescriptorTypeTwitter __NS_SYMBOL(XLFormRowDescriptorTypeTwitter)
#endif

#ifndef XLFormRowDescriptorTypeAccount
#define XLFormRowDescriptorTypeAccount __NS_SYMBOL(XLFormRowDescriptorTypeAccount)
#endif

#ifndef XLFormRowDescriptorTypeInteger
#define XLFormRowDescriptorTypeInteger __NS_SYMBOL(XLFormRowDescriptorTypeInteger)
#endif

#ifndef XLFormRowDescriptorTypeDecimal
#define XLFormRowDescriptorTypeDecimal __NS_SYMBOL(XLFormRowDescriptorTypeDecimal)
#endif

#ifndef ZX_AI013x0x1x_HEADER_SIZE
#define ZX_AI013x0x1x_HEADER_SIZE __NS_SYMBOL(ZX_AI013x0x1x_HEADER_SIZE)
#endif

#ifndef XLFormRowDescriptorTypeTextView
#define XLFormRowDescriptorTypeTextView __NS_SYMBOL(XLFormRowDescriptorTypeTextView)
#endif

#ifndef ZX_AI013x0x1x_WEIGHT_SIZE
#define ZX_AI013x0x1x_WEIGHT_SIZE __NS_SYMBOL(ZX_AI013x0x1x_WEIGHT_SIZE)
#endif

#ifndef ZX_AI013x0x1x_DATE_SIZE
#define ZX_AI013x0x1x_DATE_SIZE __NS_SYMBOL(ZX_AI013x0x1x_DATE_SIZE)
#endif

#ifndef XLFormRowDescriptorTypeSelectorPush
#define XLFormRowDescriptorTypeSelectorPush __NS_SYMBOL(XLFormRowDescriptorTypeSelectorPush)
#endif

#ifndef XLFormRowDescriptorTypeSelectorPopover
#define XLFormRowDescriptorTypeSelectorPopover __NS_SYMBOL(XLFormRowDescriptorTypeSelectorPopover)
#endif

#ifndef XLFormRowDescriptorTypeSelectorActionSheet
#define XLFormRowDescriptorTypeSelectorActionSheet __NS_SYMBOL(XLFormRowDescriptorTypeSelectorActionSheet)
#endif

#ifndef XLFormRowDescriptorTypeSelectorAlertView
#define XLFormRowDescriptorTypeSelectorAlertView __NS_SYMBOL(XLFormRowDescriptorTypeSelectorAlertView)
#endif

#ifndef XLFormRowDescriptorTypeSelectorPickerView
#define XLFormRowDescriptorTypeSelectorPickerView __NS_SYMBOL(XLFormRowDescriptorTypeSelectorPickerView)
#endif

#ifndef XLFormRowDescriptorTypeSelectorPickerViewInline
#define XLFormRowDescriptorTypeSelectorPickerViewInline __NS_SYMBOL(XLFormRowDescriptorTypeSelectorPickerViewInline)
#endif

#ifndef XLFormRowDescriptorTypeMultipleSelector
#define XLFormRowDescriptorTypeMultipleSelector __NS_SYMBOL(XLFormRowDescriptorTypeMultipleSelector)
#endif

#ifndef XLFormRowDescriptorTypeMultipleSelectorPopover
#define XLFormRowDescriptorTypeMultipleSelectorPopover __NS_SYMBOL(XLFormRowDescriptorTypeMultipleSelectorPopover)
#endif

#ifndef XLFormRowDescriptorTypeSelectorLeftRight
#define XLFormRowDescriptorTypeSelectorLeftRight __NS_SYMBOL(XLFormRowDescriptorTypeSelectorLeftRight)
#endif

#ifndef XLFormRowDescriptorTypeSelectorSegmentedControl
#define XLFormRowDescriptorTypeSelectorSegmentedControl __NS_SYMBOL(XLFormRowDescriptorTypeSelectorSegmentedControl)
#endif

#ifndef XLFormRowDescriptorTypeDateInline
#define XLFormRowDescriptorTypeDateInline __NS_SYMBOL(XLFormRowDescriptorTypeDateInline)
#endif

#ifndef ZX_EAN13_FIRST_DIGIT_ENCODINGS
#define ZX_EAN13_FIRST_DIGIT_ENCODINGS __NS_SYMBOL(ZX_EAN13_FIRST_DIGIT_ENCODINGS)
#endif

#ifndef XLFormRowDescriptorTypeDateTimeInline
#define XLFormRowDescriptorTypeDateTimeInline __NS_SYMBOL(XLFormRowDescriptorTypeDateTimeInline)
#endif

#ifndef XLFormRowDescriptorTypeTimeInline
#define XLFormRowDescriptorTypeTimeInline __NS_SYMBOL(XLFormRowDescriptorTypeTimeInline)
#endif

#ifndef XLFormRowDescriptorTypeCountDownTimerInline
#define XLFormRowDescriptorTypeCountDownTimerInline __NS_SYMBOL(XLFormRowDescriptorTypeCountDownTimerInline)
#endif

#ifndef XLFormRowDescriptorTypeDate
#define XLFormRowDescriptorTypeDate __NS_SYMBOL(XLFormRowDescriptorTypeDate)
#endif

#ifndef ZX_QUIET_ZONE_SIZE
#define ZX_QUIET_ZONE_SIZE __NS_SYMBOL(ZX_QUIET_ZONE_SIZE)
#endif

#ifndef XLFormRowDescriptorTypeDateTime
#define XLFormRowDescriptorTypeDateTime __NS_SYMBOL(XLFormRowDescriptorTypeDateTime)
#endif

#ifndef XLFormRowDescriptorTypeTime
#define XLFormRowDescriptorTypeTime __NS_SYMBOL(XLFormRowDescriptorTypeTime)
#endif

#ifndef XLFormRowDescriptorTypeCountDownTimer
#define XLFormRowDescriptorTypeCountDownTimer __NS_SYMBOL(XLFormRowDescriptorTypeCountDownTimer)
#endif

#ifndef XLFormRowDescriptorTypeDatePicker
#define XLFormRowDescriptorTypeDatePicker __NS_SYMBOL(XLFormRowDescriptorTypeDatePicker)
#endif

#ifndef ZX_BITS_SET_IN_HALF_BYTE
#define ZX_BITS_SET_IN_HALF_BYTE __NS_SYMBOL(ZX_BITS_SET_IN_HALF_BYTE)
#endif

#ifndef XLFormRowDescriptorTypePicker
#define XLFormRowDescriptorTypePicker __NS_SYMBOL(XLFormRowDescriptorTypePicker)
#endif

#ifndef XLFormRowDescriptorTypeSlider
#define XLFormRowDescriptorTypeSlider __NS_SYMBOL(XLFormRowDescriptorTypeSlider)
#endif

#ifndef XLFormRowDescriptorTypeBooleanCheck
#define XLFormRowDescriptorTypeBooleanCheck __NS_SYMBOL(XLFormRowDescriptorTypeBooleanCheck)
#endif

#ifndef XLFormRowDescriptorTypeBooleanSwitch
#define XLFormRowDescriptorTypeBooleanSwitch __NS_SYMBOL(XLFormRowDescriptorTypeBooleanSwitch)
#endif

#ifndef XLFormRowDescriptorTypeButton
#define XLFormRowDescriptorTypeButton __NS_SYMBOL(XLFormRowDescriptorTypeButton)
#endif

#ifndef XLFormRowDescriptorTypeInfo
#define XLFormRowDescriptorTypeInfo __NS_SYMBOL(XLFormRowDescriptorTypeInfo)
#endif

#ifndef XLFormRowDescriptorTypeStepCounter
#define XLFormRowDescriptorTypeStepCounter __NS_SYMBOL(XLFormRowDescriptorTypeStepCounter)
#endif

#ifndef ZX_EAN13_CODE_WIDTH
#define ZX_EAN13_CODE_WIDTH __NS_SYMBOL(ZX_EAN13_CODE_WIDTH)
#endif

#ifndef ZX_MATRIX_WIDTH
#define ZX_MATRIX_WIDTH __NS_SYMBOL(ZX_MATRIX_WIDTH)
#endif

#ifndef ZX_MATRIX_HEIGHT
#define ZX_MATRIX_HEIGHT __NS_SYMBOL(ZX_MATRIX_HEIGHT)
#endif

#ifndef ZX_AZTEC_DEFAULT_ENCODING
#define ZX_AZTEC_DEFAULT_ENCODING __NS_SYMBOL(ZX_AZTEC_DEFAULT_ENCODING)
#endif

//#ifndef DZNPhotoPickerControllerCropMode
//#define DZNPhotoPickerControllerCropMode __NS_SYMBOL(DZNPhotoPickerControllerCropMode)
//#endif

//#ifndef DZNPhotoPickerControllerCropZoomScale
//#define DZNPhotoPickerControllerCropZoomScale __NS_SYMBOL(DZNPhotoPickerControllerCropZoomScale)
//#endif

//#ifndef DZNPhotoPickerControllerPhotoMetadata
//#define DZNPhotoPickerControllerPhotoMetadata __NS_SYMBOL(DZNPhotoPickerControllerPhotoMetadata)
//#endif

#ifndef DZNPhotoPickerDidFinishPickingNotification
#define DZNPhotoPickerDidFinishPickingNotification __NS_SYMBOL(DZNPhotoPickerDidFinishPickingNotification)
#endif

#ifndef DZNPhotoPickerDidFailPickingNotification
#define DZNPhotoPickerDidFailPickingNotification __NS_SYMBOL(DZNPhotoPickerDidFailPickingNotification)
#endif

#ifndef ZX_RSS_MIN_FINDER_PATTERN_RATIO
#define ZX_RSS_MIN_FINDER_PATTERN_RATIO __NS_SYMBOL(ZX_RSS_MIN_FINDER_PATTERN_RATIO)
#endif

#ifndef ZX_RSS_MAX_FINDER_PATTERN_RATIO
#define ZX_RSS_MAX_FINDER_PATTERN_RATIO __NS_SYMBOL(ZX_RSS_MAX_FINDER_PATTERN_RATIO)
#endif

#ifndef ZX_RSS14_FINDER_PATTERNS
#define ZX_RSS14_FINDER_PATTERNS __NS_SYMBOL(ZX_RSS14_FINDER_PATTERNS)
#endif

#ifndef ZX_PDF417_MAX_NEARBY_DISTANCE
#define ZX_PDF417_MAX_NEARBY_DISTANCE __NS_SYMBOL(ZX_PDF417_MAX_NEARBY_DISTANCE)
#endif

#ifndef ZX_RSS_EXPANDED_FINDER_PATTERNS
#define ZX_RSS_EXPANDED_FINDER_PATTERNS __NS_SYMBOL(ZX_RSS_EXPANDED_FINDER_PATTERNS)
#endif

#ifndef ZX_BLOCK_SIZE_POWER
#define ZX_BLOCK_SIZE_POWER __NS_SYMBOL(ZX_BLOCK_SIZE_POWER)
#endif

#ifndef ZX_BLOCK_SIZE
#define ZX_BLOCK_SIZE __NS_SYMBOL(ZX_BLOCK_SIZE)
#endif

#ifndef ZX_BLOCK_SIZE_MASK
#define ZX_BLOCK_SIZE_MASK __NS_SYMBOL(ZX_BLOCK_SIZE_MASK)
#endif

#ifndef ZX_MINIMUM_DIMENSION
#define ZX_MINIMUM_DIMENSION __NS_SYMBOL(ZX_MINIMUM_DIMENSION)
#endif

#ifndef ZX_MIN_DYNAMIC_RANGE
#define ZX_MIN_DYNAMIC_RANGE __NS_SYMBOL(ZX_MIN_DYNAMIC_RANGE)
#endif

#ifndef ZX_CODA_START_END_CHARS
#define ZX_CODA_START_END_CHARS __NS_SYMBOL(ZX_CODA_START_END_CHARS)
#endif

#ifndef ZX_CODA_ALT_START_END_CHARS
#define ZX_CODA_ALT_START_END_CHARS __NS_SYMBOL(ZX_CODA_ALT_START_END_CHARS)
#endif

#ifndef ZX_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED
#define ZX_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED __NS_SYMBOL(ZX_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED)
#endif

#ifndef ZX_N1
#define ZX_N1 __NS_SYMBOL(ZX_N1)
#endif

#ifndef ZX_N2
#define ZX_N2 __NS_SYMBOL(ZX_N2)
#endif

#ifndef ZX_N3
#define ZX_N3 __NS_SYMBOL(ZX_N3)
#endif

#ifndef ZX_N4
#define ZX_N4 __NS_SYMBOL(ZX_N4)
#endif

#ifndef ZX_MAXI_CODE_ALL
#define ZX_MAXI_CODE_ALL __NS_SYMBOL(ZX_MAXI_CODE_ALL)
#endif

#ifndef ZX_MAXI_CODE_EVEN
#define ZX_MAXI_CODE_EVEN __NS_SYMBOL(ZX_MAXI_CODE_EVEN)
#endif

#ifndef ZX_MAXI_CODE_ODD
#define ZX_MAXI_CODE_ODD __NS_SYMBOL(ZX_MAXI_CODE_ODD)
#endif

#ifndef kSSKeychainErrorDomain
#define kSSKeychainErrorDomain __NS_SYMBOL(kSSKeychainErrorDomain)
#endif

#ifndef kSSKeychainAccountKey
#define kSSKeychainAccountKey __NS_SYMBOL(kSSKeychainAccountKey)
#endif

#ifndef kSSKeychainCreatedAtKey
#define kSSKeychainCreatedAtKey __NS_SYMBOL(kSSKeychainCreatedAtKey)
#endif

#ifndef kSSKeychainClassKey
#define kSSKeychainClassKey __NS_SYMBOL(kSSKeychainClassKey)
#endif

#ifndef kSSKeychainDescriptionKey
#define kSSKeychainDescriptionKey __NS_SYMBOL(kSSKeychainDescriptionKey)
#endif

#ifndef kSSKeychainLabelKey
#define kSSKeychainLabelKey __NS_SYMBOL(kSSKeychainLabelKey)
#endif

#ifndef kSSKeychainLastModifiedKey
#define kSSKeychainLastModifiedKey __NS_SYMBOL(kSSKeychainLastModifiedKey)
#endif

#ifndef kSSKeychainWhereKey
#define kSSKeychainWhereKey __NS_SYMBOL(kSSKeychainWhereKey)
#endif

#ifndef ZX_FACTOR_SETS
#define ZX_FACTOR_SETS __NS_SYMBOL(ZX_FACTOR_SETS)
#endif

#ifndef ZX_FACTORS
#define ZX_FACTORS __NS_SYMBOL(ZX_FACTORS)
#endif

#ifndef ZX_UCPE_MIDDLE_END_PATTERN
#define ZX_UCPE_MIDDLE_END_PATTERN __NS_SYMBOL(ZX_UCPE_MIDDLE_END_PATTERN)
#endif

#ifndef ZX_LUMINANCE_BITS
#define ZX_LUMINANCE_BITS __NS_SYMBOL(ZX_LUMINANCE_BITS)
#endif

#ifndef ZX_LUMINANCE_SHIFT
#define ZX_LUMINANCE_SHIFT __NS_SYMBOL(ZX_LUMINANCE_SHIFT)
#endif

#ifndef ZX_LUMINANCE_BUCKETS
#define ZX_LUMINANCE_BUCKETS __NS_SYMBOL(ZX_LUMINANCE_BUCKETS)
#endif

#ifndef ZX_UCPE_NUMSYS_AND_CHECK_DIGIT_PATTERNS
#define ZX_UCPE_NUMSYS_AND_CHECK_DIGIT_PATTERNS __NS_SYMBOL(ZX_UCPE_NUMSYS_AND_CHECK_DIGIT_PATTERNS)
#endif

#ifndef ZX_PDF417_WHITE_SPACE
#define ZX_PDF417_WHITE_SPACE __NS_SYMBOL(ZX_PDF417_WHITE_SPACE)
#endif

#ifndef ZX_UPCEAN_CHECK_DIGIT_ENCODINGS
#define ZX_UPCEAN_CHECK_DIGIT_ENCODINGS __NS_SYMBOL(ZX_UPCEAN_CHECK_DIGIT_ENCODINGS)
#endif

#ifndef THUMBNAIL_SCALE_FACTOR
#define THUMBNAIL_SCALE_FACTOR __NS_SYMBOL(THUMBNAIL_SCALE_FACTOR)
#endif

#ifndef ZX_CODE128_ESCAPE_FNC_1
#define ZX_CODE128_ESCAPE_FNC_1 __NS_SYMBOL(ZX_CODE128_ESCAPE_FNC_1)
#endif

#ifndef ZX_CODE128_ESCAPE_FNC_2
#define ZX_CODE128_ESCAPE_FNC_2 __NS_SYMBOL(ZX_CODE128_ESCAPE_FNC_2)
#endif

#ifndef ZX_CODE128_ESCAPE_FNC_3
#define ZX_CODE128_ESCAPE_FNC_3 __NS_SYMBOL(ZX_CODE128_ESCAPE_FNC_3)
#endif

#ifndef ZX_CODE128_ESCAPE_FNC_4
#define ZX_CODE128_ESCAPE_FNC_4 __NS_SYMBOL(ZX_CODE128_ESCAPE_FNC_4)
#endif

#ifndef XLFormRowDescHeader
#define XLFormRowDescHeader __NS_SYMBOL(XLFormRowDescHeader)
#endif

#ifndef ZX_INIT_SIZE
#define ZX_INIT_SIZE __NS_SYMBOL(ZX_INIT_SIZE)
#endif

#ifndef ZX_CORR
#define ZX_CORR __NS_SYMBOL(ZX_CORR)
#endif

#ifndef ZX_MIN_DIMENSION_TO_RECUR
#define ZX_MIN_DIMENSION_TO_RECUR __NS_SYMBOL(ZX_MIN_DIMENSION_TO_RECUR)
#endif

#ifndef ZX_MAX_DEPTH
#define ZX_MAX_DEPTH __NS_SYMBOL(ZX_MAX_DEPTH)
#endif

#ifndef ZX_PDF417_START_PATTERN
#define ZX_PDF417_START_PATTERN __NS_SYMBOL(ZX_PDF417_START_PATTERN)
#endif

#ifndef ZX_PDF417_STOP_PATTERN
#define ZX_PDF417_STOP_PATTERN __NS_SYMBOL(ZX_PDF417_STOP_PATTERN)
#endif

#ifndef ZX_PDF417_CODEWORD_TABLE
#define ZX_PDF417_CODEWORD_TABLE __NS_SYMBOL(ZX_PDF417_CODEWORD_TABLE)
#endif

#ifndef DZNPhotoServiceClientIndentifier
#define DZNPhotoServiceClientIndentifier __NS_SYMBOL(DZNPhotoServiceClientIndentifier)
#endif

#ifndef DZNPhotoServiceClientConsumerKey
#define DZNPhotoServiceClientConsumerKey __NS_SYMBOL(DZNPhotoServiceClientConsumerKey)
#endif

#ifndef DZNPhotoServiceClientConsumerSecret
#define DZNPhotoServiceClientConsumerSecret __NS_SYMBOL(DZNPhotoServiceClientConsumerSecret)
#endif

#ifndef DZNPhotoServiceClientSubscription
#define DZNPhotoServiceClientSubscription __NS_SYMBOL(DZNPhotoServiceClientSubscription)
#endif

#ifndef DZNPhotoServiceCredentialIdentifier
#define DZNPhotoServiceCredentialIdentifier __NS_SYMBOL(DZNPhotoServiceCredentialIdentifier)
#endif

#ifndef DZNPhotoServiceCredentialAccessToken
#define DZNPhotoServiceCredentialAccessToken __NS_SYMBOL(DZNPhotoServiceCredentialAccessToken)
#endif

#ifndef ZX_CODE93_ALPHABET
#define ZX_CODE93_ALPHABET __NS_SYMBOL(ZX_CODE93_ALPHABET)
#endif

#ifndef ZX_RFC2445_DURATION_FIELD_UNITS
#define ZX_RFC2445_DURATION_FIELD_UNITS __NS_SYMBOL(ZX_RFC2445_DURATION_FIELD_UNITS)
#endif

#ifndef ZX_MAX_MODULE_COUNT_PER_EDGE
#define ZX_MAX_MODULE_COUNT_PER_EDGE __NS_SYMBOL(ZX_MAX_MODULE_COUNT_PER_EDGE)
#endif

#ifndef ZX_MIN_MODULE_COUNT_PER_EDGE
#define ZX_MIN_MODULE_COUNT_PER_EDGE __NS_SYMBOL(ZX_MIN_MODULE_COUNT_PER_EDGE)
#endif

#ifndef ZX_DIFF_MODSIZE_CUTOFF_PERCENT
#define ZX_DIFF_MODSIZE_CUTOFF_PERCENT __NS_SYMBOL(ZX_DIFF_MODSIZE_CUTOFF_PERCENT)
#endif

#ifndef ZX_DIFF_MODSIZE_CUTOFF
#define ZX_DIFF_MODSIZE_CUTOFF __NS_SYMBOL(ZX_DIFF_MODSIZE_CUTOFF)
#endif

#ifndef ZX_CODE93_CHARACTER_ENCODINGS
#define ZX_CODE93_CHARACTER_ENCODINGS __NS_SYMBOL(ZX_CODE93_CHARACTER_ENCODINGS)
#endif

#ifndef ZX_ITF_DEFAULT_ALLOWED_LENGTHS
#define ZX_ITF_DEFAULT_ALLOWED_LENGTHS __NS_SYMBOL(ZX_ITF_DEFAULT_ALLOWED_LENGTHS)
#endif

#ifndef ZX_ITF_ITF_START_PATTERN
#define ZX_ITF_ITF_START_PATTERN __NS_SYMBOL(ZX_ITF_ITF_START_PATTERN)
#endif

#ifndef ZX_ITF_END_PATTERN_REVERSED
#define ZX_ITF_END_PATTERN_REVERSED __NS_SYMBOL(ZX_ITF_END_PATTERN_REVERSED)
#endif

#ifndef ZX_ITF_PATTERNS_LEN
#define ZX_ITF_PATTERNS_LEN __NS_SYMBOL(ZX_ITF_PATTERNS_LEN)
#endif

#ifndef ZX_ITF_PATTERNS
#define ZX_ITF_PATTERNS __NS_SYMBOL(ZX_ITF_PATTERNS)
#endif

#ifndef ZX_CODE93_ASTERISK_ENCODING
#define ZX_CODE93_ASTERISK_ENCODING __NS_SYMBOL(ZX_CODE93_ASTERISK_ENCODING)
#endif

#ifndef kAFOAuth2CredentialServiceName
#define kAFOAuth2CredentialServiceName __NS_SYMBOL(kAFOAuth2CredentialServiceName)
#endif

#ifndef ZX_CODE39_CHARACTER_ENCODINGS
#define ZX_CODE39_CHARACTER_ENCODINGS __NS_SYMBOL(ZX_CODE39_CHARACTER_ENCODINGS)
#endif

#ifndef SHIFTA
#define SHIFTA __NS_SYMBOL(SHIFTA)
#endif

#ifndef SHIFTB
#define SHIFTB __NS_SYMBOL(SHIFTB)
#endif

#ifndef SHIFTC
#define SHIFTC __NS_SYMBOL(SHIFTC)
#endif

#ifndef SHIFTD
#define SHIFTD __NS_SYMBOL(SHIFTD)
#endif

#ifndef SHIFTE
#define SHIFTE __NS_SYMBOL(SHIFTE)
#endif

#ifndef TWOSHIFTA
#define TWOSHIFTA __NS_SYMBOL(TWOSHIFTA)
#endif

#ifndef THREESHIFTA
#define THREESHIFTA __NS_SYMBOL(THREESHIFTA)
#endif

#ifndef LATCHA
#define LATCHA __NS_SYMBOL(LATCHA)
#endif

#ifndef LATCHB
#define LATCHB __NS_SYMBOL(LATCHB)
#endif

#ifndef LOCK
#define LOCK __NS_SYMBOL(LOCK)
#endif

#ifndef ECI
#define ECI __NS_SYMBOL(ECI)
#endif

#ifndef NS
#define NS __NS_SYMBOL(NS)
#endif

#ifndef PAD
#define PAD __NS_SYMBOL(PAD)
#endif

#ifndef FS
#define FS __NS_SYMBOL(FS)
#endif

#ifndef GS
#define GS __NS_SYMBOL(GS)
#endif

#ifndef RS
#define RS __NS_SYMBOL(RS)
#endif

#ifndef SETS
#define SETS __NS_SYMBOL(SETS)
#endif

#ifndef ZX_CODE39_ASTERISK_ENCODING
#define ZX_CODE39_ASTERISK_ENCODING __NS_SYMBOL(ZX_CODE39_ASTERISK_ENCODING)
#endif

#ifndef ZX_CODE128_CODE_PATTERNS_LEN
#define ZX_CODE128_CODE_PATTERNS_LEN __NS_SYMBOL(ZX_CODE128_CODE_PATTERNS_LEN)
#endif

#ifndef ZX_CODE128_CODE_PATTERNS
#define ZX_CODE128_CODE_PATTERNS __NS_SYMBOL(ZX_CODE128_CODE_PATTERNS)
#endif

#ifndef ZX_MONOCHROME_MAX_MODULES
#define ZX_MONOCHROME_MAX_MODULES __NS_SYMBOL(ZX_MONOCHROME_MAX_MODULES)
#endif

#ifndef ZX_AZTEC_MODE_UPPER
#define ZX_AZTEC_MODE_UPPER __NS_SYMBOL(ZX_AZTEC_MODE_UPPER)
#endif

#ifndef ZX_AZTEC_MODE_LOWER
#define ZX_AZTEC_MODE_LOWER __NS_SYMBOL(ZX_AZTEC_MODE_LOWER)
#endif

#ifndef ZX_AZTEC_MODE_DIGIT
#define ZX_AZTEC_MODE_DIGIT __NS_SYMBOL(ZX_AZTEC_MODE_DIGIT)
#endif

#ifndef ZX_AZTEC_MODE_MIXED
#define ZX_AZTEC_MODE_MIXED __NS_SYMBOL(ZX_AZTEC_MODE_MIXED)
#endif

#ifndef ZX_AZTEC_MODE_PUNCT
#define ZX_AZTEC_MODE_PUNCT __NS_SYMBOL(ZX_AZTEC_MODE_PUNCT)
#endif

#ifndef ZX_AZTEC_LATCH_TABLE
#define ZX_AZTEC_LATCH_TABLE __NS_SYMBOL(ZX_AZTEC_LATCH_TABLE)
#endif

#ifndef AFNetworkingReachabilityDidChangeNotification
#define AFNetworkingReachabilityDidChangeNotification __NS_SYMBOL(AFNetworkingReachabilityDidChangeNotification)
#endif

#ifndef AFNetworkingReachabilityNotificationStatusItem
#define AFNetworkingReachabilityNotificationStatusItem __NS_SYMBOL(AFNetworkingReachabilityNotificationStatusItem)
#endif

#ifndef ZX_AZTEC_CHAR_MAP_HEIGHT
#define ZX_AZTEC_CHAR_MAP_HEIGHT __NS_SYMBOL(ZX_AZTEC_CHAR_MAP_HEIGHT)
#endif

#ifndef ZX_AZTEC_CHAR_MAP_WIDTH
#define ZX_AZTEC_CHAR_MAP_WIDTH __NS_SYMBOL(ZX_AZTEC_CHAR_MAP_WIDTH)
#endif

#ifndef C40_BASIC_SET_CHARS
#define C40_BASIC_SET_CHARS __NS_SYMBOL(C40_BASIC_SET_CHARS)
#endif

#ifndef ZX_AZTEC_DEFAULT_EC_PERCENT
#define ZX_AZTEC_DEFAULT_EC_PERCENT __NS_SYMBOL(ZX_AZTEC_DEFAULT_EC_PERCENT)
#endif

#ifndef ZX_AZTEC_DEFAULT_LAYERS
#define ZX_AZTEC_DEFAULT_LAYERS __NS_SYMBOL(ZX_AZTEC_DEFAULT_LAYERS)
#endif

#ifndef ZX_AZTEC_MAX_NB_BITS
#define ZX_AZTEC_MAX_NB_BITS __NS_SYMBOL(ZX_AZTEC_MAX_NB_BITS)
#endif

#ifndef ZX_AZTEC_MAX_NB_BITS_COMPACT
#define ZX_AZTEC_MAX_NB_BITS_COMPACT __NS_SYMBOL(ZX_AZTEC_MAX_NB_BITS_COMPACT)
#endif

#ifndef ZX_AZTEC_WORD_SIZE
#define ZX_AZTEC_WORD_SIZE __NS_SYMBOL(ZX_AZTEC_WORD_SIZE)
#endif

#ifndef C40_SHIFT2_SET_CHARS
#define C40_SHIFT2_SET_CHARS __NS_SYMBOL(C40_SHIFT2_SET_CHARS)
#endif

#ifndef ZX_ALPHANUMERIC_CHARS
#define ZX_ALPHANUMERIC_CHARS __NS_SYMBOL(ZX_ALPHANUMERIC_CHARS)
#endif

#ifndef TEXT_BASIC_SET_CHARS
#define TEXT_BASIC_SET_CHARS __NS_SYMBOL(TEXT_BASIC_SET_CHARS)
#endif

#ifndef ZX_GB2312_SUBSET
#define ZX_GB2312_SUBSET __NS_SYMBOL(ZX_GB2312_SUBSET)
#endif

#ifndef TEXT_SHIFT3_SET_CHARS
#define TEXT_SHIFT3_SET_CHARS __NS_SYMBOL(TEXT_SHIFT3_SET_CHARS)
#endif

#ifndef ZX_MODULO_VALUE
#define ZX_MODULO_VALUE __NS_SYMBOL(ZX_MODULO_VALUE)
#endif

#ifndef ZX_POSITION_DETECTION_PATTERN
#define ZX_POSITION_DETECTION_PATTERN __NS_SYMBOL(ZX_POSITION_DETECTION_PATTERN)
#endif

#ifndef ZX_POSITION_ADJUSTMENT_PATTERN
#define ZX_POSITION_ADJUSTMENT_PATTERN __NS_SYMBOL(ZX_POSITION_ADJUSTMENT_PATTERN)
#endif

#ifndef ZX_CODA_ALPHABET
#define ZX_CODA_ALPHABET __NS_SYMBOL(ZX_CODA_ALPHABET)
#endif

#ifndef ZX_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE
#define ZX_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE __NS_SYMBOL(ZX_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE)
#endif

#ifndef ZX_CODA_ALPHABET_LEN
#define ZX_CODA_ALPHABET_LEN __NS_SYMBOL(ZX_CODA_ALPHABET_LEN)
#endif

#ifndef ZX_CODA_CHARACTER_ENCODINGS
#define ZX_CODA_CHARACTER_ENCODINGS __NS_SYMBOL(ZX_CODA_CHARACTER_ENCODINGS)
#endif

#ifndef ZX_CODA_MIN_CHARACTER_LENGTH
#define ZX_CODA_MIN_CHARACTER_LENGTH __NS_SYMBOL(ZX_CODA_MIN_CHARACTER_LENGTH)
#endif

#ifndef ZX_CODA_STARTEND_ENCODING
#define ZX_CODA_STARTEND_ENCODING __NS_SYMBOL(ZX_CODA_STARTEND_ENCODING)
#endif

#ifndef ZX_KILOGRAM
#define ZX_KILOGRAM __NS_SYMBOL(ZX_KILOGRAM)
#endif

#ifndef ZX_POUND
#define ZX_POUND __NS_SYMBOL(ZX_POUND)
#endif

#ifndef ZX_UPC_EAN_START_END_PATTERN_LEN
#define ZX_UPC_EAN_START_END_PATTERN_LEN __NS_SYMBOL(ZX_UPC_EAN_START_END_PATTERN_LEN)
#endif

#ifndef ZX_UPC_EAN_START_END_PATTERN
#define ZX_UPC_EAN_START_END_PATTERN __NS_SYMBOL(ZX_UPC_EAN_START_END_PATTERN)
#endif

#ifndef ZX_UPC_EAN_MIDDLE_PATTERN_LEN
#define ZX_UPC_EAN_MIDDLE_PATTERN_LEN __NS_SYMBOL(ZX_UPC_EAN_MIDDLE_PATTERN_LEN)
#endif

#ifndef ZX_UPC_EAN_MIDDLE_PATTERN
#define ZX_UPC_EAN_MIDDLE_PATTERN __NS_SYMBOL(ZX_UPC_EAN_MIDDLE_PATTERN)
#endif

#ifndef ZX_UPC_EAN_L_PATTERNS_LEN
#define ZX_UPC_EAN_L_PATTERNS_LEN __NS_SYMBOL(ZX_UPC_EAN_L_PATTERNS_LEN)
#endif

#ifndef PAD_CHAR
#define PAD_CHAR __NS_SYMBOL(PAD_CHAR)
#endif

#ifndef ZX_UPC_EAN_L_PATTERNS_SUB_LEN
#define ZX_UPC_EAN_L_PATTERNS_SUB_LEN __NS_SYMBOL(ZX_UPC_EAN_L_PATTERNS_SUB_LEN)
#endif

#ifndef ZX_UPC_EAN_L_PATTERNS
#define ZX_UPC_EAN_L_PATTERNS __NS_SYMBOL(ZX_UPC_EAN_L_PATTERNS)
#endif

#ifndef ZX_UPC_EAN_L_AND_G_PATTERNS_LEN
#define ZX_UPC_EAN_L_AND_G_PATTERNS_LEN __NS_SYMBOL(ZX_UPC_EAN_L_AND_G_PATTERNS_LEN)
#endif

#ifndef ZX_UPC_EAN_L_AND_G_PATTERNS_SUB_LEN
#define ZX_UPC_EAN_L_AND_G_PATTERNS_SUB_LEN __NS_SYMBOL(ZX_UPC_EAN_L_AND_G_PATTERNS_SUB_LEN)
#endif

#ifndef ZX_UPC_EAN_L_AND_G_PATTERNS
#define ZX_UPC_EAN_L_AND_G_PATTERNS __NS_SYMBOL(ZX_UPC_EAN_L_AND_G_PATTERNS)
#endif

#ifndef ZX_PDF417_INDEXES_START_PATTERN
#define ZX_PDF417_INDEXES_START_PATTERN __NS_SYMBOL(ZX_PDF417_INDEXES_START_PATTERN)
#endif

#ifndef ZX_PDF417_INDEXES_STOP_PATTERN
#define ZX_PDF417_INDEXES_STOP_PATTERN __NS_SYMBOL(ZX_PDF417_INDEXES_STOP_PATTERN)
#endif

#ifndef ZX_PDF417_MAX_AVG_VARIANCE
#define ZX_PDF417_MAX_AVG_VARIANCE __NS_SYMBOL(ZX_PDF417_MAX_AVG_VARIANCE)
#endif

#ifndef ZX_PDF417_MAX_INDIVIDUAL_VARIANCE
#define ZX_PDF417_MAX_INDIVIDUAL_VARIANCE __NS_SYMBOL(ZX_PDF417_MAX_INDIVIDUAL_VARIANCE)
#endif

#ifndef ZX_PDF417_DETECTOR_START_PATTERN
#define ZX_PDF417_DETECTOR_START_PATTERN __NS_SYMBOL(ZX_PDF417_DETECTOR_START_PATTERN)
#endif

#ifndef ZX_CODE128_CODE_SHIFT
#define ZX_CODE128_CODE_SHIFT __NS_SYMBOL(ZX_CODE128_CODE_SHIFT)
#endif

#ifndef ZX_CODE128_CODE_CODE_C
#define ZX_CODE128_CODE_CODE_C __NS_SYMBOL(ZX_CODE128_CODE_CODE_C)
#endif

#ifndef ZX_CODE128_CODE_CODE_B
#define ZX_CODE128_CODE_CODE_B __NS_SYMBOL(ZX_CODE128_CODE_CODE_B)
#endif

#ifndef ZX_CODE128_CODE_CODE_A
#define ZX_CODE128_CODE_CODE_A __NS_SYMBOL(ZX_CODE128_CODE_CODE_A)
#endif

#ifndef ZX_CODE128_CODE_FNC_1
#define ZX_CODE128_CODE_FNC_1 __NS_SYMBOL(ZX_CODE128_CODE_FNC_1)
#endif

#ifndef ZX_CODE128_CODE_FNC_2
#define ZX_CODE128_CODE_FNC_2 __NS_SYMBOL(ZX_CODE128_CODE_FNC_2)
#endif

#ifndef ZX_CODE128_CODE_FNC_3
#define ZX_CODE128_CODE_FNC_3 __NS_SYMBOL(ZX_CODE128_CODE_FNC_3)
#endif

#ifndef ZX_CODE128_CODE_FNC_4_A
#define ZX_CODE128_CODE_FNC_4_A __NS_SYMBOL(ZX_CODE128_CODE_FNC_4_A)
#endif

#ifndef ZX_PDF417_DETECTOR_STOP_PATTERN
#define ZX_PDF417_DETECTOR_STOP_PATTERN __NS_SYMBOL(ZX_PDF417_DETECTOR_STOP_PATTERN)
#endif

#ifndef ZX_CODE128_CODE_FNC_4_B
#define ZX_CODE128_CODE_FNC_4_B __NS_SYMBOL(ZX_CODE128_CODE_FNC_4_B)
#endif

#ifndef ZX_CODE128_CODE_START_A
#define ZX_CODE128_CODE_START_A __NS_SYMBOL(ZX_CODE128_CODE_START_A)
#endif

#ifndef ZX_CODE128_CODE_START_B
#define ZX_CODE128_CODE_START_B __NS_SYMBOL(ZX_CODE128_CODE_START_B)
#endif

#ifndef ZX_CODE128_CODE_START_C
#define ZX_CODE128_CODE_START_C __NS_SYMBOL(ZX_CODE128_CODE_START_C)
#endif

#ifndef ZX_CODE128_CODE_STOP
#define ZX_CODE128_CODE_STOP __NS_SYMBOL(ZX_CODE128_CODE_STOP)
#endif

#ifndef ZX_PDF417_MAX_PIXEL_DRIFT
#define ZX_PDF417_MAX_PIXEL_DRIFT __NS_SYMBOL(ZX_PDF417_MAX_PIXEL_DRIFT)
#endif

#ifndef ZX_PDF417_MAX_PATTERN_DRIFT
#define ZX_PDF417_MAX_PATTERN_DRIFT __NS_SYMBOL(ZX_PDF417_MAX_PATTERN_DRIFT)
#endif

#ifndef ZX_PDF417_SKIPPED_ROW_COUNT_MAX
#define ZX_PDF417_SKIPPED_ROW_COUNT_MAX __NS_SYMBOL(ZX_PDF417_SKIPPED_ROW_COUNT_MAX)
#endif

#ifndef ZX_PDF417_ROW_STEP
#define ZX_PDF417_ROW_STEP __NS_SYMBOL(ZX_PDF417_ROW_STEP)
#endif

#ifndef ZX_PDF417_BARCODE_MIN_HEIGHT
#define ZX_PDF417_BARCODE_MIN_HEIGHT __NS_SYMBOL(ZX_PDF417_BARCODE_MIN_HEIGHT)
#endif

#ifndef ZX_TYPE_INFO_COORDINATES
#define ZX_TYPE_INFO_COORDINATES __NS_SYMBOL(ZX_TYPE_INFO_COORDINATES)
#endif

#ifndef ZX_VERSION_INFO_POLY
#define ZX_VERSION_INFO_POLY __NS_SYMBOL(ZX_VERSION_INFO_POLY)
#endif

#ifndef ZX_TYPE_INFO_POLY
#define ZX_TYPE_INFO_POLY __NS_SYMBOL(ZX_TYPE_INFO_POLY)
#endif

#ifndef ZX_TYPE_INFO_MASK_PATTERN
#define ZX_TYPE_INFO_MASK_PATTERN __NS_SYMBOL(ZX_TYPE_INFO_MASK_PATTERN)
#endif

#ifndef ZX_PDF417_TEXT_COMPACTION_MODE_LATCH
#define ZX_PDF417_TEXT_COMPACTION_MODE_LATCH __NS_SYMBOL(ZX_PDF417_TEXT_COMPACTION_MODE_LATCH)
#endif

#ifndef ZX_PDF417_BYTE_COMPACTION_MODE_LATCH
#define ZX_PDF417_BYTE_COMPACTION_MODE_LATCH __NS_SYMBOL(ZX_PDF417_BYTE_COMPACTION_MODE_LATCH)
#endif

#ifndef ZX_PDF417_NUMERIC_COMPACTION_MODE_LATCH
#define ZX_PDF417_NUMERIC_COMPACTION_MODE_LATCH __NS_SYMBOL(ZX_PDF417_NUMERIC_COMPACTION_MODE_LATCH)
#endif

#ifndef ZX_PDF417_BYTE_COMPACTION_MODE_LATCH_6
#define ZX_PDF417_BYTE_COMPACTION_MODE_LATCH_6 __NS_SYMBOL(ZX_PDF417_BYTE_COMPACTION_MODE_LATCH_6)
#endif

#ifndef ZX_PDF417_ECI_USER_DEFINED
#define ZX_PDF417_ECI_USER_DEFINED __NS_SYMBOL(ZX_PDF417_ECI_USER_DEFINED)
#endif

#ifndef ZX_PDF417_ECI_GENERAL_PURPOSE
#define ZX_PDF417_ECI_GENERAL_PURPOSE __NS_SYMBOL(ZX_PDF417_ECI_GENERAL_PURPOSE)
#endif

#ifndef ZX_PDF417_ECI_CHARSET
#define ZX_PDF417_ECI_CHARSET __NS_SYMBOL(ZX_PDF417_ECI_CHARSET)
#endif

#ifndef ZX_PDF417_BEGIN_MACRO_PDF417_CONTROL_BLOCK
#define ZX_PDF417_BEGIN_MACRO_PDF417_CONTROL_BLOCK __NS_SYMBOL(ZX_PDF417_BEGIN_MACRO_PDF417_CONTROL_BLOCK)
#endif

#ifndef ZX_PDF417_BEGIN_MACRO_PDF417_OPTIONAL_FIELD
#define ZX_PDF417_BEGIN_MACRO_PDF417_OPTIONAL_FIELD __NS_SYMBOL(ZX_PDF417_BEGIN_MACRO_PDF417_OPTIONAL_FIELD)
#endif

#ifndef ZX_PDF417_MACRO_PDF417_TERMINATOR
#define ZX_PDF417_MACRO_PDF417_TERMINATOR __NS_SYMBOL(ZX_PDF417_MACRO_PDF417_TERMINATOR)
#endif

#ifndef ZX_PDF417_MODE_SHIFT_TO_BYTE_COMPACTION_MODE
#define ZX_PDF417_MODE_SHIFT_TO_BYTE_COMPACTION_MODE __NS_SYMBOL(ZX_PDF417_MODE_SHIFT_TO_BYTE_COMPACTION_MODE)
#endif

#ifndef ZX_PDF417_MAX_NUMERIC_CODEWORDS
#define ZX_PDF417_MAX_NUMERIC_CODEWORDS __NS_SYMBOL(ZX_PDF417_MAX_NUMERIC_CODEWORDS)
#endif

#ifndef ZX_PDF417_PL
#define ZX_PDF417_PL __NS_SYMBOL(ZX_PDF417_PL)
#endif

#ifndef ZX_PDF417_LL
#define ZX_PDF417_LL __NS_SYMBOL(ZX_PDF417_LL)
#endif

#ifndef ZX_PDF417_AS
#define ZX_PDF417_AS __NS_SYMBOL(ZX_PDF417_AS)
#endif

#ifndef ZX_PDF417_ML
#define ZX_PDF417_ML __NS_SYMBOL(ZX_PDF417_ML)
#endif

#ifndef ZX_PDF417_AL
#define ZX_PDF417_AL __NS_SYMBOL(ZX_PDF417_AL)
#endif

#ifndef ZX_PDF417_PS
#define ZX_PDF417_PS __NS_SYMBOL(ZX_PDF417_PS)
#endif

#ifndef ZX_PDF417_PAL
#define ZX_PDF417_PAL __NS_SYMBOL(ZX_PDF417_PAL)
#endif

#ifndef ZX_PDF417_PUNCT_CHARS
#define ZX_PDF417_PUNCT_CHARS __NS_SYMBOL(ZX_PDF417_PUNCT_CHARS)
#endif

#ifndef ZX_PDF417_MIXED_CHARS
#define ZX_PDF417_MIXED_CHARS __NS_SYMBOL(ZX_PDF417_MIXED_CHARS)
#endif

#ifndef kGROAuthCodeGrantType
#define kGROAuthCodeGrantType __NS_SYMBOL(kGROAuthCodeGrantType)
#endif

#ifndef ZX_PDF417_NUMBER_OF_SEQUENCE_CODEWORDS
#define ZX_PDF417_NUMBER_OF_SEQUENCE_CODEWORDS __NS_SYMBOL(ZX_PDF417_NUMBER_OF_SEQUENCE_CODEWORDS)
#endif

#ifndef ZX_PDF417_DECODING_DEFAULT_ENCODING
#define ZX_PDF417_DECODING_DEFAULT_ENCODING __NS_SYMBOL(ZX_PDF417_DECODING_DEFAULT_ENCODING)
#endif

#ifndef kGROAuthClientCredentialsGrantType
#define kGROAuthClientCredentialsGrantType __NS_SYMBOL(kGROAuthClientCredentialsGrantType)
#endif

#ifndef kGROAuthPasswordCredentialsGrantType
#define kGROAuthPasswordCredentialsGrantType __NS_SYMBOL(kGROAuthPasswordCredentialsGrantType)
#endif

#ifndef kGROAuthRefreshGrantType
#define kGROAuthRefreshGrantType __NS_SYMBOL(kGROAuthRefreshGrantType)
#endif

#ifndef kGROAuthErrorFailingOperationKey
#define kGROAuthErrorFailingOperationKey __NS_SYMBOL(kGROAuthErrorFailingOperationKey)
#endif

#ifndef ZX_PDF417_TEXT_COMPACTION
#define ZX_PDF417_TEXT_COMPACTION __NS_SYMBOL(ZX_PDF417_TEXT_COMPACTION)
#endif

#ifndef ZX_PDF417_BYTE_COMPACTION
#define ZX_PDF417_BYTE_COMPACTION __NS_SYMBOL(ZX_PDF417_BYTE_COMPACTION)
#endif

#ifndef ZX_PDF417_NUMERIC_COMPACTION
#define ZX_PDF417_NUMERIC_COMPACTION __NS_SYMBOL(ZX_PDF417_NUMERIC_COMPACTION)
#endif

#ifndef ZX_PDF417_SUBMODE_ALPHA
#define ZX_PDF417_SUBMODE_ALPHA __NS_SYMBOL(ZX_PDF417_SUBMODE_ALPHA)
#endif

#ifndef ZX_PDF417_SUBMODE_LOWER
#define ZX_PDF417_SUBMODE_LOWER __NS_SYMBOL(ZX_PDF417_SUBMODE_LOWER)
#endif

#ifndef ZX_PDF417_SUBMODE_MIXED
#define ZX_PDF417_SUBMODE_MIXED __NS_SYMBOL(ZX_PDF417_SUBMODE_MIXED)
#endif

#ifndef ZX_PDF417_SUBMODE_PUNCTUATION
#define ZX_PDF417_SUBMODE_PUNCTUATION __NS_SYMBOL(ZX_PDF417_SUBMODE_PUNCTUATION)
#endif

#ifndef ZX_PDF417_LATCH_TO_TEXT
#define ZX_PDF417_LATCH_TO_TEXT __NS_SYMBOL(ZX_PDF417_LATCH_TO_TEXT)
#endif

#ifndef ZX_PDF417_LATCH_TO_BYTE_PADDED
#define ZX_PDF417_LATCH_TO_BYTE_PADDED __NS_SYMBOL(ZX_PDF417_LATCH_TO_BYTE_PADDED)
#endif

#ifndef ZX_PDF417_LATCH_TO_NUMERIC
#define ZX_PDF417_LATCH_TO_NUMERIC __NS_SYMBOL(ZX_PDF417_LATCH_TO_NUMERIC)
#endif

#ifndef ZX_PDF417_SHIFT_TO_BYTE
#define ZX_PDF417_SHIFT_TO_BYTE __NS_SYMBOL(ZX_PDF417_SHIFT_TO_BYTE)
#endif

#ifndef ZX_PDF417_LATCH_TO_BYTE
#define ZX_PDF417_LATCH_TO_BYTE __NS_SYMBOL(ZX_PDF417_LATCH_TO_BYTE)
#endif

#ifndef ZX_PDF417_HIGH_LEVEL_ECI_USER_DEFINED
#define ZX_PDF417_HIGH_LEVEL_ECI_USER_DEFINED __NS_SYMBOL(ZX_PDF417_HIGH_LEVEL_ECI_USER_DEFINED)
#endif

#ifndef ZX_PDF417_HIGH_LEVEL_ECI_GENERAL_PURPOSE
#define ZX_PDF417_HIGH_LEVEL_ECI_GENERAL_PURPOSE __NS_SYMBOL(ZX_PDF417_HIGH_LEVEL_ECI_GENERAL_PURPOSE)
#endif

#ifndef ZX_PDF417_HIGH_LEVEL_ECI_CHARSET
#define ZX_PDF417_HIGH_LEVEL_ECI_CHARSET __NS_SYMBOL(ZX_PDF417_HIGH_LEVEL_ECI_CHARSET)
#endif

#ifndef ZX_PDF417_TEXT_MIXED_RAW
#define ZX_PDF417_TEXT_MIXED_RAW __NS_SYMBOL(ZX_PDF417_TEXT_MIXED_RAW)
#endif

#ifndef ZX_PDF417_TEXT_PUNCTUATION_RAW
#define ZX_PDF417_TEXT_PUNCTUATION_RAW __NS_SYMBOL(ZX_PDF417_TEXT_PUNCTUATION_RAW)
#endif

#ifndef ZX_PDF417_MIXED_TABLE_LEN
#define ZX_PDF417_MIXED_TABLE_LEN __NS_SYMBOL(ZX_PDF417_MIXED_TABLE_LEN)
#endif

#ifndef ZX_PDF417_PUNCTUATION_LEN
#define ZX_PDF417_PUNCTUATION_LEN __NS_SYMBOL(ZX_PDF417_PUNCTUATION_LEN)
#endif

#ifndef ZX_PDF417_DEFAULT_ENCODING
#define ZX_PDF417_DEFAULT_ENCODING __NS_SYMBOL(ZX_PDF417_DEFAULT_ENCODING)
#endif

#ifndef ZX_RSS14_OUTSIDE_EVEN_TOTAL_SUBSET
#define ZX_RSS14_OUTSIDE_EVEN_TOTAL_SUBSET __NS_SYMBOL(ZX_RSS14_OUTSIDE_EVEN_TOTAL_SUBSET)
#endif

#ifndef ZX_RSS14_INSIDE_ODD_TOTAL_SUBSET
#define ZX_RSS14_INSIDE_ODD_TOTAL_SUBSET __NS_SYMBOL(ZX_RSS14_INSIDE_ODD_TOTAL_SUBSET)
#endif

#ifndef ZX_RSS14_OUTSIDE_GSUM
#define ZX_RSS14_OUTSIDE_GSUM __NS_SYMBOL(ZX_RSS14_OUTSIDE_GSUM)
#endif

#ifndef ZX_RSS14_INSIDE_GSUM
#define ZX_RSS14_INSIDE_GSUM __NS_SYMBOL(ZX_RSS14_INSIDE_GSUM)
#endif

#ifndef ZX_RSS14_OUTSIDE_ODD_WIDEST
#define ZX_RSS14_OUTSIDE_ODD_WIDEST __NS_SYMBOL(ZX_RSS14_OUTSIDE_ODD_WIDEST)
#endif

#ifndef ZX_RSS14_INSIDE_ODD_WIDEST
#define ZX_RSS14_INSIDE_ODD_WIDEST __NS_SYMBOL(ZX_RSS14_INSIDE_ODD_WIDEST)
#endif

#ifndef ZX_PDF417_COMMON_CODEWORD_TABLE
#define ZX_PDF417_COMMON_CODEWORD_TABLE __NS_SYMBOL(ZX_PDF417_COMMON_CODEWORD_TABLE)
#endif

#ifndef ZX_PDF417_ADJUST_ROW_NUMBER_SKIP
#define ZX_PDF417_ADJUST_ROW_NUMBER_SKIP __NS_SYMBOL(ZX_PDF417_ADJUST_ROW_NUMBER_SKIP)
#endif

#ifndef ZX_CENTER_QUORUM
#define ZX_CENTER_QUORUM __NS_SYMBOL(ZX_CENTER_QUORUM)
#endif

#ifndef ZX_FINDER_PATTERN_MIN_SKIP
#define ZX_FINDER_PATTERN_MIN_SKIP __NS_SYMBOL(ZX_FINDER_PATTERN_MIN_SKIP)
#endif

#ifndef ZX_FINDER_PATTERN_MAX_MODULES
#define ZX_FINDER_PATTERN_MAX_MODULES __NS_SYMBOL(ZX_FINDER_PATTERN_MAX_MODULES)
#endif

#ifndef SMXMLDocumentErrorDomain
#define SMXMLDocumentErrorDomain __NS_SYMBOL(SMXMLDocumentErrorDomain)
#endif

#ifndef SDWebImageDownloadStartNotification
#define SDWebImageDownloadStartNotification __NS_SYMBOL(SDWebImageDownloadStartNotification)
#endif

#ifndef SDWebImageDownloadStopNotification
#define SDWebImageDownloadStopNotification __NS_SYMBOL(SDWebImageDownloadStopNotification)
#endif

#ifndef ZX_PDF417_PREFERRED_RATIO
#define ZX_PDF417_PREFERRED_RATIO __NS_SYMBOL(ZX_PDF417_PREFERRED_RATIO)
#endif

#ifndef ZX_ALPHANUMERIC_TABLE
#define ZX_ALPHANUMERIC_TABLE __NS_SYMBOL(ZX_ALPHANUMERIC_TABLE)
#endif

#ifndef ZX_PDF417_DEFAULT_MODULE_WIDTH
#define ZX_PDF417_DEFAULT_MODULE_WIDTH __NS_SYMBOL(ZX_PDF417_DEFAULT_MODULE_WIDTH)
#endif

#ifndef ZX_PDF417_HEIGHT
#define ZX_PDF417_HEIGHT __NS_SYMBOL(ZX_PDF417_HEIGHT)
#endif

#ifndef ZX_DEFAULT_BYTE_MODE_ENCODING
#define ZX_DEFAULT_BYTE_MODE_ENCODING __NS_SYMBOL(ZX_DEFAULT_BYTE_MODE_ENCODING)
#endif

#ifndef ZX_AZTEC_MODE_NAMES
#define ZX_AZTEC_MODE_NAMES __NS_SYMBOL(ZX_AZTEC_MODE_NAMES)
#endif

#ifndef ZX_AZTEC_SHIFT_TABLE
#define ZX_AZTEC_SHIFT_TABLE __NS_SYMBOL(ZX_AZTEC_SHIFT_TABLE)
#endif

#ifndef ZX_CODE93_ALPHABET_STRING
#define ZX_CODE93_ALPHABET_STRING __NS_SYMBOL(ZX_CODE93_ALPHABET_STRING)
#endif

#ifndef ZX_SYMBOL_WIDEST
#define ZX_SYMBOL_WIDEST __NS_SYMBOL(ZX_SYMBOL_WIDEST)
#endif

#ifndef ZX_EVEN_TOTAL_SUBSET
#define ZX_EVEN_TOTAL_SUBSET __NS_SYMBOL(ZX_EVEN_TOTAL_SUBSET)
#endif

#ifndef ZX_GSUM
#define ZX_GSUM __NS_SYMBOL(ZX_GSUM)
#endif

#ifndef ZX_WEIGHTS
#define ZX_WEIGHTS __NS_SYMBOL(ZX_WEIGHTS)
#endif

#ifndef ZX_FINDER_PAT_A
#define ZX_FINDER_PAT_A __NS_SYMBOL(ZX_FINDER_PAT_A)
#endif

#ifndef ZX_FINDER_PAT_B
#define ZX_FINDER_PAT_B __NS_SYMBOL(ZX_FINDER_PAT_B)
#endif

#ifndef ZX_FINDER_PAT_C
#define ZX_FINDER_PAT_C __NS_SYMBOL(ZX_FINDER_PAT_C)
#endif

#ifndef ZX_FINDER_PAT_D
#define ZX_FINDER_PAT_D __NS_SYMBOL(ZX_FINDER_PAT_D)
#endif

#ifndef ZX_FINDER_PAT_E
#define ZX_FINDER_PAT_E __NS_SYMBOL(ZX_FINDER_PAT_E)
#endif

#ifndef ZX_FINDER_PAT_F
#define ZX_FINDER_PAT_F __NS_SYMBOL(ZX_FINDER_PAT_F)
#endif

#ifndef ZX_FINDER_PATTERN_SEQUENCES
#define ZX_FINDER_PATTERN_SEQUENCES __NS_SYMBOL(ZX_FINDER_PATTERN_SEQUENCES)
#endif

#ifndef ZX_PDF417_CODEWORD_SKEW_SIZE
#define ZX_PDF417_CODEWORD_SKEW_SIZE __NS_SYMBOL(ZX_PDF417_CODEWORD_SKEW_SIZE)
#endif

#ifndef ZX_PDF417_MAX_ERRORS
#define ZX_PDF417_MAX_ERRORS __NS_SYMBOL(ZX_PDF417_MAX_ERRORS)
#endif

#ifndef ZX_PDF417_MAX_EC_CODEWORDS
#define ZX_PDF417_MAX_EC_CODEWORDS __NS_SYMBOL(ZX_PDF417_MAX_EC_CODEWORDS)
#endif

#ifndef ZX_CODE39_ALPHABET_STRING
#define ZX_CODE39_ALPHABET_STRING __NS_SYMBOL(ZX_CODE39_ALPHABET_STRING)
#endif

#ifndef AFURLResponseSerializationErrorDomain
#define AFURLResponseSerializationErrorDomain __NS_SYMBOL(AFURLResponseSerializationErrorDomain)
#endif

#ifndef AFNetworkingOperationFailingURLResponseErrorKey
#define AFNetworkingOperationFailingURLResponseErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLResponseErrorKey)
#endif

#ifndef AFNetworkingOperationFailingURLResponseDataErrorKey
#define AFNetworkingOperationFailingURLResponseDataErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLResponseDataErrorKey)
#endif

#ifndef XLFormErrorDomain
#define XLFormErrorDomain __NS_SYMBOL(XLFormErrorDomain)
#endif

#ifndef XLValidationStatusErrorKey
#define XLValidationStatusErrorKey __NS_SYMBOL(XLValidationStatusErrorKey)
#endif

#ifndef ZX_PDF417_MIXED_TABLE
#define ZX_PDF417_MIXED_TABLE __NS_SYMBOL(ZX_PDF417_MIXED_TABLE)
#endif

#ifndef ZX_PDF417_PUNCTUATION
#define ZX_PDF417_PUNCTUATION __NS_SYMBOL(ZX_PDF417_PUNCTUATION)
#endif

#ifndef AFNetworkingOperationDidStartNotification
#define AFNetworkingOperationDidStartNotification __NS_SYMBOL(AFNetworkingOperationDidStartNotification)
#endif

#ifndef AFNetworkingOperationDidFinishNotification
#define AFNetworkingOperationDidFinishNotification __NS_SYMBOL(AFNetworkingOperationDidFinishNotification)
#endif

#ifndef introScreens
#define introScreens __NS_SYMBOL(introScreens)
#endif

#ifndef ZX_VERSION_DECODE_INFO
#define ZX_VERSION_DECODE_INFO __NS_SYMBOL(ZX_VERSION_DECODE_INFO)
#endif

#ifndef AFNetworkingTaskDidResumeNotification
#define AFNetworkingTaskDidResumeNotification __NS_SYMBOL(AFNetworkingTaskDidResumeNotification)
#endif

#ifndef AFNetworkingTaskDidCompleteNotification
#define AFNetworkingTaskDidCompleteNotification __NS_SYMBOL(AFNetworkingTaskDidCompleteNotification)
#endif

#ifndef AFNetworkingTaskDidSuspendNotification
#define AFNetworkingTaskDidSuspendNotification __NS_SYMBOL(AFNetworkingTaskDidSuspendNotification)
#endif

#ifndef AFURLSessionDidInvalidateNotification
#define AFURLSessionDidInvalidateNotification __NS_SYMBOL(AFURLSessionDidInvalidateNotification)
#endif

#ifndef AFURLSessionDownloadTaskDidFailToMoveFileNotification
#define AFURLSessionDownloadTaskDidFailToMoveFileNotification __NS_SYMBOL(AFURLSessionDownloadTaskDidFailToMoveFileNotification)
#endif

#ifndef AFNetworkingTaskDidStartNotification
#define AFNetworkingTaskDidStartNotification __NS_SYMBOL(AFNetworkingTaskDidStartNotification)
#endif

#ifndef AFNetworkingTaskDidFinishNotification
#define AFNetworkingTaskDidFinishNotification __NS_SYMBOL(AFNetworkingTaskDidFinishNotification)
#endif

#ifndef AFNetworkingTaskDidCompleteSerializedResponseKey
#define AFNetworkingTaskDidCompleteSerializedResponseKey __NS_SYMBOL(AFNetworkingTaskDidCompleteSerializedResponseKey)
#endif

#ifndef AFNetworkingTaskDidCompleteResponseSerializerKey
#define AFNetworkingTaskDidCompleteResponseSerializerKey __NS_SYMBOL(AFNetworkingTaskDidCompleteResponseSerializerKey)
#endif

#ifndef AFNetworkingTaskDidCompleteResponseDataKey
#define AFNetworkingTaskDidCompleteResponseDataKey __NS_SYMBOL(AFNetworkingTaskDidCompleteResponseDataKey)
#endif

#ifndef AFNetworkingTaskDidCompleteErrorKey
#define AFNetworkingTaskDidCompleteErrorKey __NS_SYMBOL(AFNetworkingTaskDidCompleteErrorKey)
#endif

#ifndef AFNetworkingTaskDidCompleteAssetPathKey
#define AFNetworkingTaskDidCompleteAssetPathKey __NS_SYMBOL(AFNetworkingTaskDidCompleteAssetPathKey)
#endif

#ifndef AFNetworkingTaskDidFinishSerializedResponseKey
#define AFNetworkingTaskDidFinishSerializedResponseKey __NS_SYMBOL(AFNetworkingTaskDidFinishSerializedResponseKey)
#endif

#ifndef AFNetworkingTaskDidFinishResponseSerializerKey
#define AFNetworkingTaskDidFinishResponseSerializerKey __NS_SYMBOL(AFNetworkingTaskDidFinishResponseSerializerKey)
#endif

#ifndef AFNetworkingTaskDidFinishResponseDataKey
#define AFNetworkingTaskDidFinishResponseDataKey __NS_SYMBOL(AFNetworkingTaskDidFinishResponseDataKey)
#endif

#ifndef AFNetworkingTaskDidFinishErrorKey
#define AFNetworkingTaskDidFinishErrorKey __NS_SYMBOL(AFNetworkingTaskDidFinishErrorKey)
#endif

#ifndef AFNetworkingTaskDidFinishAssetPathKey
#define AFNetworkingTaskDidFinishAssetPathKey __NS_SYMBOL(AFNetworkingTaskDidFinishAssetPathKey)
#endif

#ifndef labelWidth
#define labelWidth __NS_SYMBOL(labelWidth)
#endif

#ifndef continueBtn
#define continueBtn __NS_SYMBOL(continueBtn)
#endif

#ifndef AFURLRequestSerializationErrorDomain
#define AFURLRequestSerializationErrorDomain __NS_SYMBOL(AFURLRequestSerializationErrorDomain)
#endif

#ifndef AFNetworkingOperationFailingURLRequestErrorKey
#define AFNetworkingOperationFailingURLRequestErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLRequestErrorKey)
#endif

#ifndef kCRToastNotificationTypeKey
#define kCRToastNotificationTypeKey __NS_SYMBOL(kCRToastNotificationTypeKey)
#endif

#ifndef kCRToastNotificationPreferredHeightKey
#define kCRToastNotificationPreferredHeightKey __NS_SYMBOL(kCRToastNotificationPreferredHeightKey)
#endif

#ifndef kCRToastNotificationPreferredPaddingKey
#define kCRToastNotificationPreferredPaddingKey __NS_SYMBOL(kCRToastNotificationPreferredPaddingKey)
#endif

#ifndef kCRToastNotificationPresentationTypeKey
#define kCRToastNotificationPresentationTypeKey __NS_SYMBOL(kCRToastNotificationPresentationTypeKey)
#endif

#ifndef kCRToastUnderStatusBarKey
#define kCRToastUnderStatusBarKey __NS_SYMBOL(kCRToastUnderStatusBarKey)
#endif

#ifndef kCRToastKeepNavigationBarBorderKey
#define kCRToastKeepNavigationBarBorderKey __NS_SYMBOL(kCRToastKeepNavigationBarBorderKey)
#endif

#ifndef kCRToastAnimationInTypeKey
#define kCRToastAnimationInTypeKey __NS_SYMBOL(kCRToastAnimationInTypeKey)
#endif

#ifndef kCRToastAnimationOutTypeKey
#define kCRToastAnimationOutTypeKey __NS_SYMBOL(kCRToastAnimationOutTypeKey)
#endif

#ifndef kCRToastAnimationInDirectionKey
#define kCRToastAnimationInDirectionKey __NS_SYMBOL(kCRToastAnimationInDirectionKey)
#endif

#ifndef kCRToastAnimationOutDirectionKey
#define kCRToastAnimationOutDirectionKey __NS_SYMBOL(kCRToastAnimationOutDirectionKey)
#endif

#ifndef kCRToastAnimationInTimeIntervalKey
#define kCRToastAnimationInTimeIntervalKey __NS_SYMBOL(kCRToastAnimationInTimeIntervalKey)
#endif

#ifndef kCRToastTimeIntervalKey
#define kCRToastTimeIntervalKey __NS_SYMBOL(kCRToastTimeIntervalKey)
#endif

#ifndef kCRToastAnimationOutTimeIntervalKey
#define kCRToastAnimationOutTimeIntervalKey __NS_SYMBOL(kCRToastAnimationOutTimeIntervalKey)
#endif

#ifndef kCRToastAnimationSpringDampingKey
#define kCRToastAnimationSpringDampingKey __NS_SYMBOL(kCRToastAnimationSpringDampingKey)
#endif

#ifndef kCRToastAnimationSpringInitialVelocityKey
#define kCRToastAnimationSpringInitialVelocityKey __NS_SYMBOL(kCRToastAnimationSpringInitialVelocityKey)
#endif

#ifndef kCRToastAnimationGravityMagnitudeKey
#define kCRToastAnimationGravityMagnitudeKey __NS_SYMBOL(kCRToastAnimationGravityMagnitudeKey)
#endif

#ifndef kCRToastTextKey
#define kCRToastTextKey __NS_SYMBOL(kCRToastTextKey)
#endif

#ifndef kCRToastFontKey
#define kCRToastFontKey __NS_SYMBOL(kCRToastFontKey)
#endif

#ifndef kCRToastTextColorKey
#define kCRToastTextColorKey __NS_SYMBOL(kCRToastTextColorKey)
#endif

#ifndef kCRToastTextAlignmentKey
#define kCRToastTextAlignmentKey __NS_SYMBOL(kCRToastTextAlignmentKey)
#endif

#ifndef kCRToastTextShadowColorKey
#define kCRToastTextShadowColorKey __NS_SYMBOL(kCRToastTextShadowColorKey)
#endif

#ifndef kCRToastTextShadowOffsetKey
#define kCRToastTextShadowOffsetKey __NS_SYMBOL(kCRToastTextShadowOffsetKey)
#endif

#ifndef kCRToastTextMaxNumberOfLinesKey
#define kCRToastTextMaxNumberOfLinesKey __NS_SYMBOL(kCRToastTextMaxNumberOfLinesKey)
#endif

#ifndef kCRToastSubtitleTextKey
#define kCRToastSubtitleTextKey __NS_SYMBOL(kCRToastSubtitleTextKey)
#endif

#ifndef kCRToastSubtitleFontKey
#define kCRToastSubtitleFontKey __NS_SYMBOL(kCRToastSubtitleFontKey)
#endif

#ifndef kCRToastSubtitleTextColorKey
#define kCRToastSubtitleTextColorKey __NS_SYMBOL(kCRToastSubtitleTextColorKey)
#endif

#ifndef kCRToastSubtitleTextAlignmentKey
#define kCRToastSubtitleTextAlignmentKey __NS_SYMBOL(kCRToastSubtitleTextAlignmentKey)
#endif

#ifndef kCRToastSubtitleTextShadowColorKey
#define kCRToastSubtitleTextShadowColorKey __NS_SYMBOL(kCRToastSubtitleTextShadowColorKey)
#endif

#ifndef kCRToastSubtitleTextShadowOffsetKey
#define kCRToastSubtitleTextShadowOffsetKey __NS_SYMBOL(kCRToastSubtitleTextShadowOffsetKey)
#endif

#ifndef kCRToastSubtitleTextMaxNumberOfLinesKey
#define kCRToastSubtitleTextMaxNumberOfLinesKey __NS_SYMBOL(kCRToastSubtitleTextMaxNumberOfLinesKey)
#endif

#ifndef kCRToastStatusBarStyleKey
#define kCRToastStatusBarStyleKey __NS_SYMBOL(kCRToastStatusBarStyleKey)
#endif

#ifndef kCRToastBackgroundColorKey
#define kCRToastBackgroundColorKey __NS_SYMBOL(kCRToastBackgroundColorKey)
#endif

#ifndef kCRToastBackgroundViewKey
#define kCRToastBackgroundViewKey __NS_SYMBOL(kCRToastBackgroundViewKey)
#endif

#ifndef kCRToastImageKey
#define kCRToastImageKey __NS_SYMBOL(kCRToastImageKey)
#endif

#ifndef kCRToastImageContentModeKey
#define kCRToastImageContentModeKey __NS_SYMBOL(kCRToastImageContentModeKey)
#endif

#ifndef kCRToastImageAlignmentKey
#define kCRToastImageAlignmentKey __NS_SYMBOL(kCRToastImageAlignmentKey)
#endif

#ifndef kCRToastImageTintKey
#define kCRToastImageTintKey __NS_SYMBOL(kCRToastImageTintKey)
#endif

#ifndef kCRToastShowActivityIndicatorKey
#define kCRToastShowActivityIndicatorKey __NS_SYMBOL(kCRToastShowActivityIndicatorKey)
#endif

#ifndef kCRToastActivityIndicatorViewStyleKey
#define kCRToastActivityIndicatorViewStyleKey __NS_SYMBOL(kCRToastActivityIndicatorViewStyleKey)
#endif

#ifndef kCRToastActivityIndicatorAlignmentKey
#define kCRToastActivityIndicatorAlignmentKey __NS_SYMBOL(kCRToastActivityIndicatorAlignmentKey)
#endif

#ifndef kCRToastInteractionRespondersKey
#define kCRToastInteractionRespondersKey __NS_SYMBOL(kCRToastInteractionRespondersKey)
#endif

#ifndef kCRToastForceUserInteractionKey
#define kCRToastForceUserInteractionKey __NS_SYMBOL(kCRToastForceUserInteractionKey)
#endif

#ifndef kCRToastAutorotateKey
#define kCRToastAutorotateKey __NS_SYMBOL(kCRToastAutorotateKey)
#endif

#ifndef kCRToastIdentifierKey
#define kCRToastIdentifierKey __NS_SYMBOL(kCRToastIdentifierKey)
#endif

#ifndef kCRToastCaptureDefaultWindowKey
#define kCRToastCaptureDefaultWindowKey __NS_SYMBOL(kCRToastCaptureDefaultWindowKey)
#endif

//#ifndef loading
//#define loading __NS_SYMBOL(loading)
//#endif


//#ifndef CMMotionManager
//#define CMMotionManager __NS_SYMBOL(CMMotionManager)
//#endif

#ifndef kFormTextViewCellPlaceholder
#define kFormTextViewCellPlaceholder __NS_SYMBOL(kFormTextViewCellPlaceholder)
#endif



#ifndef proceedBtn
#define proceedBtn __NS_SYMBOL(proceedBtn)
#endif

#ifndef noticesRows
#define noticesRows __NS_SYMBOL(noticesRows)
#endif

#ifndef kAFUploadStream3GSuggestedPacketSize
#define kAFUploadStream3GSuggestedPacketSize __NS_SYMBOL(kAFUploadStream3GSuggestedPacketSize)
#endif

#ifndef kAFUploadStream3GSuggestedDelay
#define kAFUploadStream3GSuggestedDelay __NS_SYMBOL(kAFUploadStream3GSuggestedDelay)
#endif

#ifndef logoImg
#define logoImg __NS_SYMBOL(logoImg)
#endif

#ifndef qrImg
#define qrImg __NS_SYMBOL(qrImg)
#endif

#ifndef displayLbl
#define displayLbl __NS_SYMBOL(displayLbl)
#endif

#ifndef labelW
#define labelW __NS_SYMBOL(labelW)
#endif

#ifndef proceed_btn
#define proceed_btn __NS_SYMBOL(proceed_btn)
#endif

#ifndef selectedAnswer
#define selectedAnswer __NS_SYMBOL(selectedAnswer)
#endif

#ifndef badgeTimer
#define badgeTimer __NS_SYMBOL(badgeTimer)
#endif

#ifndef timer
#define timer __NS_SYMBOL(timer)
#endif

#ifndef airlinesList
#define airlinesList __NS_SYMBOL(airlinesList)
#endif

#ifndef airlineData
#define airlineData __NS_SYMBOL(airlineData)
#endif

#ifndef summarySecs
#define summarySecs __NS_SYMBOL(summarySecs)
#endif

#ifndef questionsRows
#define questionsRows __NS_SYMBOL(questionsRows)
#endif

#ifndef floatingView
#define floatingView __NS_SYMBOL(floatingView)
#endif

#ifndef footer_btn
#define footer_btn __NS_SYMBOL(footer_btn)
#endif

#ifndef enterPasscodePresented
#define enterPasscodePresented __NS_SYMBOL(enterPasscodePresented)
#endif

#ifndef currentController
#define currentController __NS_SYMBOL(currentController)
#endif

#ifndef counter
#define counter __NS_SYMBOL(counter)
#endif

